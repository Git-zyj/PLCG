/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82228
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
    var_20 = ((/* implicit */signed char) -188923027);
    var_21 += ((/* implicit */unsigned short) min((((((/* implicit */int) var_19)) + (((int) var_8)))), ((-(((/* implicit */int) (signed char)65))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [(signed char)4] [(unsigned short)2] [i_0] &= ((/* implicit */signed char) (+(arr_6 [i_0] [(short)4] [i_0])));
                            arr_12 [i_0] [1LL] [i_2] [i_1] = ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_5 [i_0] [i_1] [i_2 + 1]))), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_3 [4LL] [i_2 + 1] [4LL])) ? (arr_5 [i_3 - 3] [2] [8]) : (((/* implicit */long long int) arr_3 [8LL] [i_2 - 2] [8LL])))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)27148))) == (arr_6 [i_3 + 1] [(unsigned short)0] [i_2])))))))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((764584482) / (var_14)))) ? (arr_8 [i_1] [8LL] [i_1] [i_1]) : (((((/* implicit */_Bool) (short)27134)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)31585))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)-27139)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27148))) : (2361345551042275414LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27149)) ? (((/* implicit */int) (unsigned short)52339)) : (((/* implicit */int) (short)-27141)))))))) : (((int) arr_3 [i_1] [i_1] [i_1])));
            }
        } 
    } 
}
