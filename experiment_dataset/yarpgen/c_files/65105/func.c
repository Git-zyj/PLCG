/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65105
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
    var_17 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) arr_0 [i_0])))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [(_Bool)1]) > (((/* implicit */long long int) var_7)))))) == ((+(var_7)))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 3; i_3 < 12; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        {
                            var_20 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 + 1] [i_2] [(unsigned short)0] [i_3] [i_3 + 1]))));
                            arr_15 [(unsigned char)3] [i_2] [i_4] = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) ^ (arr_6 [(unsigned short)2] [i_2] [4]))) > (((/* implicit */unsigned int) ((int) var_12))))));
                        }
                    } 
                } 
                arr_16 [i_1] [(unsigned short)6] = ((/* implicit */_Bool) min((((long long int) (short)-15361)), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1])))))));
            }
        } 
    } 
}
