/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82343
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_10 += ((/* implicit */_Bool) (unsigned char)121);
                    var_11 = ((/* implicit */int) ((unsigned char) ((short) (-2147483647 - 1))));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [8ULL] [i_1] [i_2])) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((16169224789831455940ULL) > (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0]))))))))))));
                    var_13 -= (~(((int) arr_2 [i_0 + 1])));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_5);
    var_15 = ((((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned char)1)))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) 1777979567990669245ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) > (((/* implicit */int) var_6)))))))) : (9223372036854775807LL));
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(((((var_3) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) & (((/* implicit */int) var_8)))))))));
}
