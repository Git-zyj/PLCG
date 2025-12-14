/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72936
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-46)) < ((-(((int) var_12)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((/* implicit */int) ((short) var_16))) : (((/* implicit */int) arr_1 [i_0])))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((int) arr_0 [7ULL])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_0]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (((long long int) ((short) arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_17)), ((unsigned short)65118)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) var_7))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            arr_9 [i_0] [i_0] [i_0] = (+(((/* implicit */int) (_Bool)0)));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((1638012417U) ^ (((/* implicit */unsigned int) 504670876)))))));
            arr_10 [i_1 - 1] [i_0] = ((/* implicit */int) ((unsigned short) arr_0 [11LL]));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) -2147483637))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((((_Bool)1) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        }
        for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned char) var_12)))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) arr_13 [(_Bool)1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)32873))))) : (1404603794U))))))));
            arr_14 [i_0] [i_0] [10U] = var_7;
            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_8 [i_0] [(signed char)4] [i_0]))) << (((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) var_8)) : (-8683809289029004624LL))) - (1219912619LL)))))) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_4))));
        }
    }
    var_26 = ((/* implicit */int) var_6);
}
