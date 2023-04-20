# (1)コンパイラ
CC  = g++
# (2)コンパイルオプション
CFLAGS    = -std=c++11 
# (3)実行ファイル名
TARGET  = out
# (4)コンパイル対象のソースコード
SRCS    = editor.cpp
# (5)オブジェクトファイル名
OBJS    = $(SRCS:.cpp=.o)
 
# (6)インクルードファイルのあるディレクトリパス
INCDIR  = -I/usr/local/include 

# (7)ライブラリファイルのあるディレクトリパス
LIBDIR  = 
 
# (8)追加するライブラリファイル
# hello.cpp compile用
# LIBS    = `fltk-config --cxxflags --ldflags` -framework Cocoa
LIBS = /usr/local/lib/libfltk.a /usr/local/lib/libfltk_images.a -lm -lpthread -framework Cocoa

# (9)ターゲットファイル生成
#$(TARGET): $(OBJS)
#	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)
	
# (10)オブジェクトファイル生成
#$(OBJS): $(SRCS)
#	$(CC) $(INCDIR) -c $(SRCS)

# コンパイル
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) $(LIBS)

# (11)"make all"で make cleanとmakeを同時に実施。
all: clean $(COMPAILE)

# (12).oファイル、実行ファイル、.dファイルを削除
clean:
	-rm -f $(OBJS) $(TARGET) *.d
