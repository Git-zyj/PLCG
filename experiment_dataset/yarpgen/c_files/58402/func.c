/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58402
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
    var_10 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (max((var_0), (4294967295U))))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 1703076011U)) ? (((/* implicit */long long int) var_0)) : (8456931952315028938LL)))))) > (((((/* implicit */_Bool) (-(-8456931952315028930LL)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((-8456931952315028942LL) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)48))))))))), (((((/* implicit */_Bool) var_0)) ? ((~(var_1))) : ((-(var_0)))))));
        var_13 = ((/* implicit */_Bool) max((var_13), (var_7)));
    }
    for (int i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [i_1])) ? (var_4) : (var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12578))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-17040))) * (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32758)))))))));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_1))))));
        }
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            arr_14 [i_1] [i_3 + 3] = ((/* implicit */short) var_7);
            var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1])) <= (min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_3] [i_1]))))));
        }
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_5 [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 23; i_6 += 3) 
                {
                    for (unsigned int i_7 = 4; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                            arr_28 [i_1] [i_1] [i_5] = ((((/* implicit */int) arr_16 [i_1])) - (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) (short)24204)))));
                            arr_29 [i_7 + 2] [i_6] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 403513053)) / (-3227795605133323675LL)));
                            arr_30 [i_1] [i_1] [(short)20] [20LL] [i_7 + 2] [i_6] [i_7 - 2] = ((/* implicit */unsigned int) (+(var_9)));
                        }
                    } 
                } 
                arr_31 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned char) arr_22 [i_1 - 2] [i_1]));
                arr_32 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) arr_3 [i_1])))) : (var_9)));
                /* LoopNest 2 */
                for (unsigned short i_8 = 3; i_8 < 22; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((arr_3 [i_9]) >= (((/* implicit */int) (short)7936)))))));
                            arr_39 [i_9] [(signed char)22] [i_1] [i_4] [i_1] [i_4] [i_1 - 2] = ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */long long int) -268435456)) : (3227795605133323674LL));
                        }
                    } 
                } 
            }
            for (short i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                arr_42 [i_1 - 1] [i_1] [i_10] = ((/* implicit */unsigned long long int) -287226416);
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))));
            }
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)4080)))))))));
        }
    }
}
