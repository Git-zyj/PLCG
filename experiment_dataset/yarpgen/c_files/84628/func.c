/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84628
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
    var_12 &= ((/* implicit */long long int) max((((/* implicit */int) min((var_5), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */int) max((((/* implicit */short) (unsigned char)138)), ((short)-1)))) >> (((var_0) - (3630386580670639635ULL)))))));
    var_13 += ((/* implicit */unsigned int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 6; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_2] &= ((/* implicit */unsigned long long int) min((1542080137), (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)29292)))))))));
                    arr_8 [i_0] [i_0 + 4] [(short)3] = ((/* implicit */int) 4294967295U);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 7; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                var_14 = (~(((((/* implicit */int) (short)31913)) * (((((/* implicit */int) arr_4 [i_3] [(signed char)5] [i_4])) - (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 3; i_7 < 9; i_7 += 4) 
                        {
                            {
                                arr_21 [i_3] [i_4] [(unsigned char)0] [i_3] [i_7] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) 0LL))), ((+(min((var_6), (((/* implicit */unsigned long long int) var_10))))))));
                                arr_22 [i_3] [i_3] [i_5] [i_6] [(_Bool)1] = (-(((/* implicit */int) max(((unsigned short)10062), (((/* implicit */unsigned short) (unsigned char)207))))));
                                var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((((/* implicit */int) var_2)) <= (((/* implicit */int) (_Bool)1)))), (arr_0 [4]))))));
                                var_16 = ((/* implicit */unsigned short) ((long long int) (unsigned short)56259));
                                arr_23 [i_7] [i_3 - 1] [i_6] [i_3] [i_4] [i_3] [i_3 - 1] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 1260565933)) ? (-1196608424) : (-1260565934))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
