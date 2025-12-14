/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91729
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
    var_15 = var_7;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [(signed char)10] [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [0ULL] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(signed char)10] [(signed char)10])) : (((/* implicit */int) arr_0 [i_0]))))) : (var_5)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_1] [i_3]);
                        arr_10 [i_0] = ((/* implicit */unsigned char) ((short) ((unsigned short) var_7)));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((unsigned int) ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (12390218631100029976ULL))))));
                            var_19 += ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_2)))))) ? (549755813824LL) : (max((((/* implicit */long long int) (unsigned short)18916)), (((long long int) -549755813824LL)))));
                            var_20 += arr_2 [i_3] [i_1];
                            arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (unsigned short)59916);
                        }
                    }
                } 
            } 
        } 
        var_21 += ((/* implicit */_Bool) ((((((long long int) -1592706427)) >= (((/* implicit */long long int) var_5)))) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) & (arr_8 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (-1592706427)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0] [i_0])))))));
    }
}
