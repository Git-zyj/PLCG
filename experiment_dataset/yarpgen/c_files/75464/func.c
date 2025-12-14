/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75464
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
    var_12 = ((/* implicit */long long int) (~(var_1)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_12 [8LL] [8LL] [8LL] [i_1] [(_Bool)1] &= ((/* implicit */unsigned int) var_10);
                        var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((int) 58720256))) & (((((/* implicit */_Bool) (+(arr_9 [i_0] [i_1] [i_0])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (arr_3 [i_2])))) : (max((5147391661499089391LL), (var_4)))))));
                        arr_13 [i_0] [i_1] [i_2] [19U] [i_0] [i_3] = ((/* implicit */unsigned char) 5147391661499089391LL);
                        arr_14 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */int) (short)0)), (arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [7LL])))) && (((/* implicit */_Bool) arr_9 [i_0] [i_0 - 2] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -2005674598)) ? (((arr_0 [i_0 + 2]) ? (4080U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2]))))) : (((/* implicit */unsigned int) ((-1735211640) & (var_8)))))))));
                        arr_15 [(_Bool)1] [i_2] [i_2] [i_1] [(_Bool)1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) && (((/* implicit */_Bool) (-(1556134246))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 21; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10)) ? (337797656828474347ULL) : (((/* implicit */unsigned long long int) -1735211640))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))) : (var_1)))))))));
                                arr_21 [i_5 + 3] [6LL] [6LL] [i_0] |= ((/* implicit */long long int) (short)-18490);
                                var_15 = ((/* implicit */unsigned int) ((unsigned short) (~(var_9))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_10)) & (((((((/* implicit */_Bool) 10U)) ? (17982850032268268964ULL) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 - 1] [i_0])))) | (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) 991935983)))))))));
                }
            } 
        } 
    } 
}
