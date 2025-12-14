/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63972
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_0))));
                    arr_8 [i_0] [i_1] = ((/* implicit */_Bool) max((-1701468854), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)26629))))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (short)26618)) ? (17991939099011453701ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26629))))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) (~(min((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) 1108785862137183679LL)) ? (((/* implicit */int) (short)-17883)) : (676163434)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    arr_17 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) 1496112531);
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                arr_24 [i_4] |= ((/* implicit */long long int) ((((((/* implicit */unsigned int) -1701468854)) != (max((((/* implicit */unsigned int) 676163438)), (var_2))))) ? (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (11652713583045814405ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_6)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)24817)) << (((8517077637431488990LL) - (8517077637431488987LL))))))));
                                var_18 = arr_19 [i_3] [i_3] [i_3] [i_3] [i_3];
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (((arr_12 [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))), (((long long int) min((((/* implicit */unsigned long long int) (short)-26637)), (454804974698097914ULL))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned long long int) var_15);
                                var_21 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_11)))) : (((((/* implicit */_Bool) 2870617529926392910ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_27 [i_8]))))))) ^ (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_15 [i_8]))))))));
                                arr_31 [(_Bool)1] [i_3] [(_Bool)1] [i_8] = ((((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned int) var_6))))) ? (((((/* implicit */_Bool) 0)) ? (-438722949) : (arr_18 [i_3] [i_3] [i_5] [i_8] [i_9]))) : ((-(arr_18 [i_3] [i_3] [i_5] [i_3] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) -438722949)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) : (var_13))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 676163434))))))));
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (-1701468854)))), (1108785862137183667LL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26628))) : (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_13)))))));
}
