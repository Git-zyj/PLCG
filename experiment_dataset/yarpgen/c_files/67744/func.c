/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67744
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) -7863787890204382144LL);
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (((+(((/* implicit */int) var_15)))) != (-170137224)))) / (((/* implicit */int) arr_0 [(unsigned short)3]))));
            }
        } 
    } 
    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) 170137224)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4))) : (((((/* implicit */_Bool) 170137224)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1959))) : (var_3)))))) ? (5235548070639606355ULL) : (((/* implicit */unsigned long long int) min((1051220556U), (((/* implicit */unsigned int) (short)0)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) var_11);
                arr_11 [i_3] = ((/* implicit */long long int) -170137224);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) var_17);
                            arr_17 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)12102)) / (((/* implicit */int) (short)24363))));
                            arr_18 [i_2] [i_3] [i_4] [i_5] [i_3] [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((-170137224), (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) (-(-9007199254740992LL)))) : (min((13099496694615038748ULL), (((/* implicit */unsigned long long int) arr_6 [i_5 - 1])))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) 170137224)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (3243746739U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            {
                var_23 -= arr_14 [(_Bool)1] [8ULL] [21LL];
                var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)84)) ? (((((/* implicit */_Bool) var_11)) ? (var_14) : (240518168576ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_7]))))))) == (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_7] [i_7]))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1U))))))))));
                arr_24 [i_6] [i_6] [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2923)))))) ? (18446743833191383039ULL) : (((/* implicit */unsigned long long int) 3243746739U)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (1051220551U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)11805))))))))));
            }
        } 
    } 
}
