/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56666
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_10 = (_Bool)0;
                    var_11 = ((/* implicit */unsigned short) min((var_11), ((unsigned short)19126)));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 4; i_4 < 12; i_4 += 1) 
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (unsigned char)156;
                            var_12 = (unsigned char)187;
                            var_13 = ((/* implicit */unsigned int) (_Bool)0);
                        }
                        /* vectorizable */
                        for (signed char i_5 = 4; i_5 < 10; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) -1621541561))));
                            arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] = (unsigned short)9556;
                            var_15 = ((/* implicit */unsigned short) (unsigned char)156);
                            arr_17 [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (unsigned char)187);
                            arr_18 [i_0] [i_0] [i_0] [(unsigned char)0] [i_0] [i_1] = ((/* implicit */long long int) (unsigned char)100);
                        }
                        var_16 ^= ((/* implicit */short) (unsigned short)52556);
                        arr_19 [i_2] [i_1] [i_0] = ((/* implicit */int) (_Bool)1);
                    }
                    for (signed char i_6 = 4; i_6 < 10; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) (unsigned char)100);
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 615013213))));
                        arr_24 [i_0] [i_1] [i_2] [i_6] [i_0] [i_1] = (unsigned char)3;
                    }
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        arr_29 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)156);
                        var_19 = ((/* implicit */short) (unsigned char)252);
                        arr_30 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)3604);
                        var_20 = ((/* implicit */unsigned short) (unsigned char)151);
                    }
                    arr_31 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) 0U);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (short)-18239);
    var_22 = ((/* implicit */_Bool) (short)511);
    var_23 -= ((/* implicit */unsigned long long int) (unsigned char)248);
}
