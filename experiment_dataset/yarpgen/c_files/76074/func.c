/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76074
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
    var_19 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) var_3)))))) ? (var_18) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)250)) < (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) 3175576814U)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (short)31450)))))))));
    var_20 += ((/* implicit */short) ((((((5871859757693166848LL) / (-5871859757693166833LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_7)) - (29290)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 *= ((/* implicit */short) (((-((-(5871859757693166818LL))))) / (min((((/* implicit */long long int) ((signed char) (unsigned char)236))), (((((/* implicit */_Bool) var_4)) ? (-5871859757693166833LL) : (((/* implicit */long long int) 804047560))))))));
                arr_4 [i_0] = ((((/* implicit */_Bool) 5871859757693166839LL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_1 [(_Bool)1])))) > (941818234088024893ULL)))) : (((/* implicit */int) var_11)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (((-((~(((/* implicit */int) (short)-23837)))))) % (((/* implicit */int) ((signed char) min((arr_6 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))))));
                            var_22 += ((/* implicit */unsigned short) arr_1 [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_0] [i_4] [i_5]))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_4] [1ULL])) : (((/* implicit */int) (_Bool)1))))));
                            arr_17 [i_0] [i_5] = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_5] [i_1] [(unsigned char)4]))))));
                            var_23 = ((/* implicit */unsigned int) max((((unsigned long long int) arr_12 [i_0])), (((/* implicit */unsigned long long int) ((5871859757693166848LL) + (((/* implicit */long long int) arr_0 [i_4] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (5871859757693166812LL)))) ? (((((/* implicit */_Bool) -5871859757693166804LL)) ? (2034401409) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((signed char) (unsigned char)6))) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))))))));
}
