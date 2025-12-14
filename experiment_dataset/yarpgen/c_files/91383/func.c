/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91383
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)-23)), (2069296106U)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) (-(-1387772173)));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            var_22 ^= ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_1 [i_1]))))))));
            arr_7 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) (-(arr_2 [i_1])));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_1 [i_0]))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_9 [i_1 + 1] [11] [i_2])) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 2] [i_4])) : (((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2] [i_2]))))));
                            arr_14 [i_4] [(unsigned char)6] [i_0] [i_1 + 1] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (arr_12 [i_0] [14U] [i_2] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (short)3)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1325920714U)) ? (arr_4 [i_4] [i_1 - 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19721))))))))) : (((/* implicit */int) (short)26))));
                            var_25 = ((/* implicit */signed char) (short)-30);
                            var_26 -= ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) (+(var_7)))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_18 [i_0] = ((/* implicit */long long int) max(((short)24), ((short)26)));
            var_27 = ((/* implicit */_Bool) var_13);
            var_28 = ((/* implicit */long long int) min((var_28), ((+(max((((/* implicit */long long int) arr_1 [i_0])), (arr_4 [i_0] [i_0] [(unsigned short)14])))))));
            var_29 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(6160971007862154676ULL)))) ? (((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) (short)-27)) : (((/* implicit */int) arr_9 [i_0] [i_5] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-4)))))))) ? (((((/* implicit */_Bool) ((int) (unsigned short)3072))) ? (max((((/* implicit */long long int) var_13)), (arr_15 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)21028)) ? (var_5) : (((/* implicit */int) (short)16471))))), (max((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [(unsigned short)11] [i_5])), (-2188270252364038309LL)))))));
            arr_19 [i_0] [i_5] [i_5] = -3609658591101037846LL;
        }
        arr_20 [(unsigned char)8] &= ((/* implicit */unsigned short) min((((/* implicit */short) (signed char)118)), ((short)2719)));
    }
}
