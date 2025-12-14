/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91698
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
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_2)))))) > (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((unsigned long long int) (+(((((/* implicit */_Bool) 8)) ? (((/* implicit */int) (short)8391)) : (((/* implicit */int) var_15)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_0])), ((~(arr_1 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2 - 2] [i_6] [(unsigned short)8] [i_2] [i_2 - 2] = ((/* implicit */unsigned short) arr_8 [(short)2]);
                                arr_19 [i_6] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(arr_14 [i_2] [i_2 - 2] [i_3 + 1] [i_5 + 2])))), (((((/* implicit */int) (unsigned char)53)) * ((~(((/* implicit */int) (unsigned short)14176))))))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_2 + 1] [i_3 - 1] = ((/* implicit */long long int) -4);
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_3);
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */int) var_14)) + (2147483647))) << ((((+(var_11))) - (6169694446880944732ULL))))))));
}
