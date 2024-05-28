#include <iostream>
#include <iomanip>
using namespace std;

struct Pohon_nisrina156
{
    char dataNisrina_2311102156;
    Pohon_nisrina156 *left, *right, *parent;
};

Pohon_nisrina156 *root, *baru;

void init()
{
    root = NULL;
}

bool isEmpty()
{
    return root == NULL;
}

void buatNode_156(char dataNisrina_2311102156)
{
    if (isEmpty())
    {
        root = new Pohon_nisrina156();
        root->dataNisrina_2311102156 = dataNisrina_2311102156;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << "\n Node " << dataNisrina_2311102156 << " berhasil dibuat sebagai root." << endl;
    }
    else
    {
        cout << "\n Tree sudah ada!" << endl;
    }
}

Pohon_nisrina156 *insertLeft(char dataNisrina_2311102156, Pohon_nisrina156 *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->left != NULL)
        {
            cout << "\n Node " << node->dataNisrina_2311102156 << " sudah ada child kiri !" << endl;
            return NULL;
        }
        else
        {
            Pohon_nisrina156 *baru = new Pohon_nisrina156();
            baru->dataNisrina_2311102156 = dataNisrina_2311102156;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->left = baru;
            cout << "\n Node " << dataNisrina_2311102156 << " berhasil ditambahkan ke child kiri " << baru->parent->dataNisrina_2311102156 << endl;
            return baru;
        }
    }
}

Pohon_nisrina156 *insertRight(char dataNisrina_2311102156, Pohon_nisrina156 *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->right != NULL)
        {
            cout << "\n Node " << node->dataNisrina_2311102156 << " sudah ada child  kanan !" << endl;
            return NULL;
        }
        else
        {
            Pohon_nisrina156 *baru = new Pohon_nisrina156();
            baru->dataNisrina_2311102156 = dataNisrina_2311102156;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->right = baru;
            cout << "\n Node " << dataNisrina_2311102156 << " berhasil ditambahkan ke child kanan " << baru->parent->dataNisrina_2311102156 << endl;
            return baru;
        }
    }
}

void update(char dataNisrina_2311102156, Pohon_nisrina156 *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\n Node yang ingin diganti tidak ada!!" << endl;
        }
        else
        {
            char temp = node->dataNisrina_2311102156;
            node->dataNisrina_2311102156 = dataNisrina_2311102156;
            cout << "\n Node " << temp << " berhasil diubah menjadi " << dataNisrina_2311102156 << endl;
        }
    }
}
void retrieve(Pohon_nisrina156 *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\n Node yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\n Data node : " << node->dataNisrina_2311102156 << endl;
        }
    }
}
// Fungsi untuk mencari node berdasarkan dataNisrina_2311102156
Pohon_nisrina156 *find(Pohon_nisrina156 *node, char dataNisrina_2311102156)
{
    if (node == NULL)
    {
        return NULL;
    }
    if (node->dataNisrina_2311102156 == dataNisrina_2311102156)
    {
        return node;
    }
    Pohon_nisrina156 *leftResult = find(node->left, dataNisrina_2311102156);
    if (leftResult != NULL)
    {
        return leftResult;
    }
    return find(node->right, dataNisrina_2311102156);
}
void preOrder(Pohon_nisrina156 *node = root) // Penelusuran (Traversal) preOrder
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            cout << " " << node->dataNisrina_2311102156 << ", ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
}

// inOrder
void inOrder(Pohon_nisrina156 *node = root)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            inOrder(node->left);
            cout << " " << node->dataNisrina_2311102156 << ", ";
            inOrder(node->right);
        }
    }
}

// postOrder
void postOrder(Pohon_nisrina156 *node = root)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            postOrder(node->left);
            postOrder(node->right);
            cout << " " << node->dataNisrina_2311102156 << ", ";
        }
    }
}
// Hapus Node Tree
void deleteNode(Pohon_nisrina156 *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            if (node != root)
            {
                node->parent->left = NULL;
                node->parent->right = NULL;
            }
            deleteNode(node->left);
            deleteNode(node->right);
            if (node == root)
            {
                delete root;
                root = NULL;
            }
            else
            {
                cout << "Node " << node->dataNisrina_2311102156 << " berhasil dihapus" << endl;
                delete node;
            }
        }
    }
}
// Hapus SubTree
void deleteSub(Pohon_nisrina156 *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return;
    }
    if (node == NULL)
    {
        cout << "\n Node yang ingin dihapus tidak ada!" << endl;
        return;
    }
    // Menghapus subtree kiri dan kanan dari node yang diberikan
    deleteNode(node->left);
    deleteNode(node->right);
    // Memutus hubungan node dari parentnya
    if (node->parent != NULL)
    {
        if (node->parent->left == node)
            node->parent->left = NULL;
        else if (node->parent->right == node)
            node->parent->right = NULL;
    }
    // Menghapus node itu sendiri jika bukan root
    if (node != root)
    {
        delete node;
    }
    else
    {
        root = NULL;
    }
    cout << "\n Subtree berhasil dihapus." << endl;
}
// Hapus Tree
void clear()
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!!" << endl;
    }
    else
    {
        deleteNode(root);
        cout << "\n Pohon berhasil dihapus." << endl;
    }
}

int size(Pohon_nisrina156 *node = root) // Cek Size Tree
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            return 1 + size(node->left) + size(node->right);
        }
    }
}
int height(Pohon_nisrina156 *node = root) // Cek Height Level Tree
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            int heightKiri = height(node->left);
            int heightKanan = height(node->right);
            if (heightKiri >= heightKanan)
            {
                return heightKiri + 1;
            }
            else
            {
                return heightKanan + 1;
            }
        }
    }
}
void printDescendant(Pohon_nisrina156 *node) // Fungsi tambahan untuk menampilkan descendant
{
    if (node != NULL)
    {
        if (node->left != NULL || node->right != NULL)
        {
            if (node->left != NULL)
            {
                cout << node->left->dataNisrina_2311102156 << " ";
                printDescendant(node->left);
            }
            if (node->right != NULL)
            {
                cout << node->right->dataNisrina_2311102156 << " ";
                printDescendant(node->right);
            }
        }
    }
}
void printChildren(Pohon_nisrina156 *node)
{
    if (node != NULL)
    {
        if (node->left != NULL)
        {
            cout << node->left->dataNisrina_2311102156 << " ";
            printChildren(node->left);
        }
        if (node->right != NULL)
        {
            cout << node->right->dataNisrina_2311102156 << " ";
            printChildren(node->right);
        }
    }
}
void characteristic(Pohon_nisrina156 *node) // Karakteristik Tree
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return;
    }

    if (!node)
    {
        cout << "\n Node yang ditunjuk tidak ada!" << endl;
        return;
    }

    cout << "\n Data Node : " << node->dataNisrina_2311102156 << endl;
    cout << "Root : " << root->dataNisrina_2311102156 << endl;
    if (!node->parent)
        cout << "Parent : (tidak punya parent)" << endl;
    else
        cout << "Parent : " << node->parent->dataNisrina_2311102156 << endl;

    if (node->parent != NULL && node->parent->left != node && node->parent->right == node)
        cout << "Sibling : " << node->parent->left->dataNisrina_2311102156 << endl;
    else if (node->parent != NULL && node->parent->right != node && node->parent->left == node)
        cout << "Sibling : " << node->parent->right->dataNisrina_2311102156 << endl;
    else
        cout << "Sibling : (tidak punya sibling)" << endl;

    if (!node->left)
        cout << "Child Kiri : (tidak punya Child kiri)" << endl;
    else
        cout << "Child Kiri : " << node->left->dataNisrina_2311102156 << endl;

    if (!node->right)
        cout << "Child Kanan : (tidak punya Child kanan)" << endl;
    else
        cout << "Child Kanan : " << node->right->dataNisrina_2311102156 << endl;

    // Menampilkan semua child
    cout << "Child Nodes : ";
    printChildren(node);
    cout << endl;

    // Menampilkan descendant
    cout << "Descendant : ";
    printDescendant(node);
    cout << endl;
}

int main()
{
    char pilihan;
    do
    {
        cout << "\nMenu Tree by Nisrina Amalia Iffatunnisa:" << endl;
        cout << "1. Buat Node" << endl;
        cout << "2. Update Node" << endl;
        cout << "3. Retrieve Node" << endl;
        cout << "4. Karakteristik Tree" << endl;
        cout << "5. Traversal (Pre, In, Post)" << endl;
        cout << "6. Detail Tree" << endl;
        cout << "7. Delete Node" << endl;
        cout << "8. Delete Sub Tree" << endl;
        cout << "9. Delete Tree" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        char dataNisrina_2311102156, parentdataNisrina_2311102156;
        Pohon_nisrina156 *parentNode, *node;

        switch (pilihan)
        {
        case '1':
            if (isEmpty())
            {
                cout << "Masukkan data Node untuk root: ";
                cin >> dataNisrina_2311102156;
                buatNode_156(dataNisrina_2311102156);
            }
            else
            {
                cout << "Masukkan data node baru: ";
                cin >> dataNisrina_2311102156;
                cout << "Masukkan data parent node: ";
                cin >> parentdataNisrina_2311102156;
                node = find(root, parentdataNisrina_2311102156);
                if (node == NULL)
                {
                    cout << "Node induk tidak ditemukan!" << endl;
                    break;
                }
                cout << "Pilih 1 untuk Child Kiri, 2 untuk Kanan: ";
                int choice;
                cin >> choice;
                if (choice == 1)
                {
                    insertLeft(dataNisrina_2311102156, node);
                }
                else if (choice == 2)
                {
                    insertRight(dataNisrina_2311102156, node);
                }
                else
                {
                    cout << "Pilihan tidak valid!" << endl;
                }
            }
            break;
        case '2':
            cout << "Masukkan data baru: ";
            cin >> dataNisrina_2311102156;
            cout << "Masukkan data node yang ingin diupdate: ";
            cin >> parentdataNisrina_2311102156;
            node = find(root, parentdataNisrina_2311102156);
            update(dataNisrina_2311102156, node);
            break;
        case '3':
            cout << "Masukkan node yang akan diambil: ";
            cin >> parentdataNisrina_2311102156;
            node = find(root, parentdataNisrina_2311102156);
            retrieve(node);
            break;
        case '4':
            cout << "Masukkan data node yang ingin ditampilkan karakteristiknya: ";
            cin >> parentdataNisrina_2311102156;
            node = find(root, parentdataNisrina_2311102156);
            characteristic(node);
            break;
        case '5':
            cout << "Traversal Pre Order: ";
            preOrder(root);
            cout << endl;

            cout << "Traversal In Order: ";
            inOrder(root);
            cout << endl;

            cout << "Traversal Post Order: ";
            postOrder(root);
            cout << endl;
            break;
        case '6':
            if (!isEmpty())
            {
                cout << "\nSize of Tree: " << size() << endl;
                cout << "Height of Tree: " << height() << endl;
                cout << "Average Value of Nodes: " << fixed << setprecision(2) << size() / height() << endl;
            }
            else
            {
                cout << "\nTree is empty." << endl;
            }
            break;
        case '7':
            cout << "Masukkan node yang ingin di hapus: ";
            cin >> parentdataNisrina_2311102156;
            node = find(root, parentdataNisrina_2311102156);
            deleteNode(node);
            break;
        case '8':
            cout << "Masukkan data node yang ingin dihapus subtreenya: ";
            cin >> parentdataNisrina_2311102156;
            node = find(root, parentdataNisrina_2311102156);
            deleteSub(node);
            break;
        case '9':
            clear();
            break;
        default:
            cout << "Mohon maaf pilihan tidak valid! Terima kasih sudah menggunakan program ini" << endl;
            break;
        }
    } while (pilihan != '0');

    return 0;
}
