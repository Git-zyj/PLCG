/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74660
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min(((~(3218517147564648499LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) <= (var_6))))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) ((-1526623460) <= (((/* implicit */int) var_0)))))) % (max((8712367547933463061ULL), (((/* implicit */unsigned long long int) 433032664))))))));
                                var_11 = ((/* implicit */_Bool) ((int) max((arr_15 [i_2]), (arr_15 [i_0]))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) (unsigned char)147)))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max(((((!(((/* implicit */_Bool) var_9)))) && (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) var_2)))))), ((!((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) (~(var_3)));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (unsigned int i_6 = 3; i_6 < 20; i_6 += 1) 
        {
            {
                arr_22 [(_Bool)1] [(_Bool)1] [8U] |= -1526623460;
                arr_23 [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_19 [i_6 + 2] [i_6 + 1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((min((-1493829418966958755LL), (((/* implicit */long long int) var_4)))) & ((~(0LL)))))), (max((var_9), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_5] [i_5]))))))))))));
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) arr_21 [i_5] [i_5] [i_5])) > (arr_21 [i_6] [i_6] [11ULL]))))) : (((((/* implicit */_Bool) arr_17 [i_5] [i_6 + 2])) ? (max((((/* implicit */unsigned long long int) var_2)), (var_9))) : (((/* implicit */unsigned long long int) var_3)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    for (short i_8 = 3; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_20 [i_7 + 1] [i_6 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))) : (var_2))))))));
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(-1526623465)))), (var_2))))));
                            var_18 = ((/* implicit */int) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_0);
}
