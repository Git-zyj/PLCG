/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80894
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) max(((unsigned short)0), (((/* implicit */unsigned short) (((-(13034942534119015905ULL))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-20324))))))))));
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((unsigned char) (((+(((/* implicit */int) var_8)))) <= ((-(890091368)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((((-890091369) != (((/* implicit */int) (unsigned short)16)))) ? (((/* implicit */int) min((var_2), (var_3)))) : (((/* implicit */int) var_1))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_0 [i_0]))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)30), ((unsigned short)65535)))) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)682)) == (-1080108255))))))) : (((/* implicit */int) ((short) 67645734912ULL)))));
    }
    var_13 -= var_5;
}
