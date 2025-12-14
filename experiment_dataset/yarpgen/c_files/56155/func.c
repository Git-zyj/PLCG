/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56155
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
    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4)))))) < (((unsigned long long int) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))))))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((var_19) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)18892)) << (((((((/* implicit */int) (short)-18895)) + (18914))) - (8)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_3 - 1]))));
                            var_23 *= 4840605315649951201ULL;
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_3 + 2] [(_Bool)1] [6ULL])) : ((+(((/* implicit */int) (unsigned short)2601))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) arr_6 [i_0] [i_2] [i_3])))) : (((((/* implicit */int) (unsigned char)56)) / (((/* implicit */int) (unsigned char)6)))))))));
                            var_25 -= ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_0]))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */int) arr_4 [5U])) : (((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_4 [i_0]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)4)), (var_15)))))))));
                var_27 = ((/* implicit */long long int) min((var_27), (((long long int) ((((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_1])))) && (((/* implicit */_Bool) arr_5 [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_11 [i_4] = ((/* implicit */unsigned int) min(((short)18884), ((short)18869)));
        var_28 = ((/* implicit */short) min(((+(((unsigned long long int) (short)18873)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41852)) ? (6152014614935675518LL) : (arr_2 [(signed char)19] [i_4])))) && (((/* implicit */_Bool) arr_9 [i_4])))))));
    }
    for (unsigned char i_5 = 4; i_5 < 9; i_5 += 3) 
    {
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (short)-9914)))))));
        arr_14 [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5 - 4])))))));
        arr_15 [i_5] [i_5] = ((/* implicit */short) (signed char)-17);
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5 - 3])) ? (((((/* implicit */int) arr_1 [i_5])) << (((((/* implicit */int) (short)18894)) - (18893))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) (-(((long long int) var_12))))))))));
    }
}
