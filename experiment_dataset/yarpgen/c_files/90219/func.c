/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90219
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */signed char) var_4);
                var_17 = ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)1)))), (((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (134217712ULL))) < (((/* implicit */unsigned long long int) 13U))))) : (((/* implicit */int) var_6)));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((int) arr_3 [i_1] [i_2])))));
                    var_19 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_2])))), (((((/* implicit */_Bool) ((15341303058317992913ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_12))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 309281599U)) ? (((/* implicit */int) (unsigned short)18397)) : (((/* implicit */int) (signed char)-1))));
                                var_21 *= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_5 [i_1]))))));
                                var_22 &= ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
                                arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((+(arr_0 [i_0])))));
                                var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-3))))) : ((+(880275907U)))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-((+(((((/* implicit */_Bool) var_13)) ? (309281599U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (((_Bool)0) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 309281594U))))) | ((+(((/* implicit */int) var_6)))))) : (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) ((short) (_Bool)1)))))));
                                var_26 = ((/* implicit */unsigned int) var_13);
                                arr_24 [i_0] [i_1] [i_5] [i_6] [i_6] = ((/* implicit */long long int) min((533889387), (((((/* implicit */_Bool) -787239125)) ? (((/* implicit */int) (short)-3143)) : (((/* implicit */int) (short)5980))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            {
                                arr_35 [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)18988)) ? (1842850808U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [3ULL])))))));
                                var_27 = (-((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))));
                                var_28 = ((1311447410179958244ULL) | (((/* implicit */unsigned long long int) 1215264600U)));
                                var_29 = ((((/* implicit */_Bool) (unsigned char)10)) ? ((+(((((/* implicit */_Bool) (short)3148)) ? (3088947254U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_30 = ((((/* implicit */_Bool) 787239125)) ? (min((((/* implicit */unsigned long long int) ((unsigned int) var_3))), (max((((/* implicit */unsigned long long int) -787239125)), (6326666189582543298ULL))))) : (((/* implicit */unsigned long long int) 3082929402U)));
}
