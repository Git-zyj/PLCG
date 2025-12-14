/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66933
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
    var_19 = ((/* implicit */_Bool) (-(-354529534)));
    var_20 = ((/* implicit */short) (signed char)-90);
    var_21 = ((/* implicit */unsigned int) ((354529537) >> (((((/* implicit */int) (signed char)86)) - (84)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        var_22 -= ((/* implicit */unsigned short) ((int) var_6));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) 3864688246U)))))) % (arr_1 [i_0 + 3])));
        arr_2 [i_0 + 4] = (!(((/* implicit */_Bool) 3162121710U)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */short) (~(arr_3 [i_1 - 1] [i_2 - 1])));
                    var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((var_15) != (var_11))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)65442)))));
                        var_26 ^= ((/* implicit */unsigned long long int) ((unsigned int) var_6));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (arr_1 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            var_28 = ((/* implicit */signed char) ((unsigned char) var_8));
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) var_3);
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_14))) | (((/* implicit */int) arr_4 [i_3]))));
                            arr_16 [5U] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)65442)) - (65419)))));
                            var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 + 3]))));
                        }
                        for (signed char i_6 = 4; i_6 < 9; i_6 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((int) arr_9 [i_0 + 2] [i_2 + 2] [i_1 + 1])))));
                            arr_19 [i_0 + 2] [i_1 + 1] [i_2] [i_6] = ((/* implicit */unsigned short) ((long long int) (unsigned short)868));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */int) ((-4467835517530508356LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119)))))) != (((/* implicit */int) (unsigned short)0)))))));
                        }
                        arr_20 [i_0] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) arr_9 [i_1 - 1] [i_1 - 3] [i_1 + 1]));
                        var_34 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_2] [i_3])) : (((int) var_17))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned short) ((4467835517530508356LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        var_36 = ((/* implicit */unsigned short) ((unsigned char) arr_14 [i_0 + 2] [i_1] [i_1] [i_1 - 3] [i_2] [i_2 - 3]));
                    }
                    var_37 = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1]))));
                    arr_24 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)80))) : (-4467835517530508342LL)));
}
