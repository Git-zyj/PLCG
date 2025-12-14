/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9921
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_17 += ((/* implicit */unsigned char) ((var_7) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [15] [i_1 - 1] [i_1])))));
                    var_18 = ((/* implicit */unsigned long long int) (unsigned short)19034);
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13404))) <= (1424804792U))))));
                }
                for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    var_20 += ((/* implicit */unsigned short) (-(1723901757760152432LL)));
                    var_21 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_4))))) ? (((((/* implicit */unsigned long long int) var_8)) | (524287ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_15))))))) ? (((0ULL) - (((/* implicit */unsigned long long int) -5329685791470959911LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3)))))) % (min((6999308921041022517LL), (((/* implicit */long long int) (unsigned short)46501))))));
                    var_22 = ((/* implicit */int) max((((/* implicit */long long int) var_10)), ((-(max((var_11), (((/* implicit */long long int) var_4))))))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) ((8067988385954441941ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))))))) + (((max((((/* implicit */long long int) var_4)), (var_8))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (arr_14 [i_0])))))))))));
                }
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_11))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_1))));
                arr_16 [i_0] [i_0] = ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((var_14) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52150)))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1]))) : (var_6))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((var_3) >> (((var_16) - (18234648957491876592ULL))))) : (var_8))) >> (((max((((/* implicit */unsigned long long int) -2147483647)), (0ULL))) - (18446744071562067959ULL)))));
}
