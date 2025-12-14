/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60817
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
    var_16 = ((/* implicit */unsigned char) (!(var_12)));
    var_17 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) -1LL);
                arr_6 [i_0 + 3] [i_1] = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((unsigned int) 1U));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_23 [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) var_11)), ((~(((/* implicit */int) arr_18 [i_3] [i_3]))))));
                                arr_24 [(_Bool)1] [i_3] [i_3] [i_3] [i_3] [i_3] = -7276035848846016026LL;
                            }
                        } 
                    } 
                    var_19 += ((((/* implicit */_Bool) (~(arr_21 [i_2] [i_3])))) ? (max((arr_21 [i_2 + 1] [i_3]), (((/* implicit */unsigned long long int) arr_12 [i_4] [i_3] [i_2 + 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(2147450880)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        for (int i_8 = 3; i_8 < 17; i_8 += 1) 
        {
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((((2147467264) / (((/* implicit */int) (short)-13961)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_30 [i_7] [i_8 - 2])) == (((/* implicit */int) (signed char)-32)))))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18567)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_28 [i_9])))) : (((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7]))))))))))));
                    arr_33 [i_7] [i_7] [i_9] [i_9] = ((short) (unsigned short)8782);
                }
            } 
        } 
    } 
}
