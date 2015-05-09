#ifndef HEADERS
#define HEADERS

// initializes vector with all of the stadiums in the text file
void read_stadiums_from_file(QVector<baseball_team>& vector);

// writes stadiums to a file using data from vector
void write_stadiums_to_file(QVector<baseball_team>& vector);

#endif

