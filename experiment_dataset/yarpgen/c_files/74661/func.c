/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74661
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    var_10 = (-(((((/* implicit */_Bool) -4754376928210838165LL)) ? (3821679803476078054LL) : (((/* implicit */long long int) -1348932765)))));
                    arr_7 [i_0] [i_1] [i_2] [6U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) && ((!(((/* implicit */_Bool) (short)-16758))))));
                    var_11 &= ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? ((+(((/* implicit */int) (unsigned char)54)))) : (-1348932745)));
                }
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (int i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        {
                            var_12 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) var_5))))), (max((((/* implicit */unsigned int) (signed char)81)), (618564042U)))))), ((((!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [(unsigned char)16] [4ULL] [i_4])))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 6LL)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))))));
                            var_13 = ((/* implicit */int) min((max((max((((/* implicit */unsigned long long int) 1348932737)), (10921687986224476197ULL))), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((max((((/* implicit */unsigned long long int) (unsigned char)112)), (2469434315437292188ULL))) * (12694785616416025312ULL)))));
                        }
                    } 
                } 
                var_14 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) (unsigned char)255)), (-4754376928210838169LL)))))), (min(((-(18287930442857174719ULL))), (((/* implicit */unsigned long long int) -3821679803476078060LL))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 8292815896960014561ULL)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)210))))), (2462140439006086818LL)));
    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4754376928210838180LL)) ? (1348932765) : (((/* implicit */int) (unsigned char)33))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-28673)) <= (((/* implicit */int) (unsigned char)129)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)112)) && (var_7)))) : ((-(((/* implicit */int) var_8))))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)41722), (((/* implicit */unsigned short) var_9)))))) - (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1))))))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (3821679803476078054LL)))), (((2111062325329920ULL) >> (((/* implicit */int) (unsigned char)3))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 536862720U)), (2583282098754422483ULL)))))))));
}
