/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78419
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0])) ? ((+(((/* implicit */int) var_4)))) : (-1590901584))), (((((/* implicit */int) var_10)) - (((/* implicit */int) var_1))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) min(((-(-1590901604))), (min((((((/* implicit */int) var_0)) * (((/* implicit */int) var_6)))), ((~(((/* implicit */int) var_2))))))));
        var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)121))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((unsigned int) ((min((((/* implicit */int) var_2)), (-853171138))) <= (((((/* implicit */_Bool) var_6)) ? (1280939035) : (((/* implicit */int) (unsigned short)2647)))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            for (signed char i_3 = 3; i_3 < 22; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        for (signed char i_5 = 2; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_16 = arr_17 [i_2] [i_1] [i_3 - 2];
                                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(15825290857643524174ULL)))) || (((/* implicit */_Bool) ((1136233313U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30375)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */long long int) var_3))))))))) : (((long long int) 2147483646))));
                                var_18 = ((/* implicit */_Bool) 15825290857643524193ULL);
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1280939035)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) / (((((/* implicit */_Bool) (+(var_11)))) ? (arr_18 [i_2 - 2] [i_2] [i_2] [i_2] [i_2] [(_Bool)1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2350893738U)) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) var_7)))))))));
                }
            } 
        } 
        arr_23 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_14 [i_1] [21U] [i_1]) : (2621453216066027441ULL)))) ? (((/* implicit */int) var_2)) : (arr_12 [i_1] [i_1])))) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) : (((((/* implicit */int) (short)-14495)) + (((/* implicit */int) (short)317))))));
        arr_24 [i_1] = ((((/* implicit */int) max((arr_11 [i_1] [i_1] [i_1]), (((/* implicit */short) (signed char)127))))) > (((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))));
    }
    var_19 = ((/* implicit */short) (-(var_13)));
    var_20 = var_1;
}
