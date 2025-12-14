/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63901
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)99)))) % (min(((-(((/* implicit */int) (signed char)-1)))), ((~(((/* implicit */int) var_7))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_12 [i_0] [(signed char)0] [i_2] [i_3 + 1]))))))) & (((/* implicit */int) min(((unsigned short)27835), (((/* implicit */unsigned short) (signed char)-6))))))))));
                            arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((arr_4 [i_0] [i_0]) + (((/* implicit */long long int) (-(-119947697)))))) % (((/* implicit */long long int) ((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 119947697))))))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                            {
                                var_14 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 17628627259408689114ULL)) ? (max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (17628627259408689114ULL))) : (arr_8 [i_4] [i_3 - 2] [i_4]))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))) % (474622092825383202LL))))))));
                                arr_16 [i_0] [i_1] [i_2] [0ULL] [i_4] |= ((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_0)))));
                                var_15 = ((/* implicit */int) -2743869574412862879LL);
                                arr_17 [i_4] [i_3 + 1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) 1954056409)), (arr_8 [i_0] [i_2 + 1] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_0] [i_2 + 1] [i_0])))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            var_16 -= ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_5])), (var_1)))), (((548443549731082324LL) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) && (((/* implicit */_Bool) (+(arr_7 [i_1] [i_1] [(signed char)0])))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)37695)) ? (((/* implicit */int) (unsigned short)50716)) : (-119947698)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            arr_28 [i_8] [i_0] [i_7] = ((/* implicit */short) ((9136480918649361388ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_20 [i_8] [i_7] [i_1] [i_0] [i_0]), (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-16372))))) : (((/* implicit */int) (unsigned char)115)))))));
                            arr_29 [i_7] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7]))) + (var_4))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_0] [i_7] [i_8])))))));
                            arr_30 [i_0] [i_1] [i_7] [12U] = ((/* implicit */unsigned short) (signed char)-101);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_8);
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((((unsigned long long int) (short)16392)) * (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_0))) - (((/* implicit */int) (_Bool)1))))))))));
}
