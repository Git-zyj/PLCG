/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62331
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
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) arr_0 [i_0]);
                arr_6 [i_0] = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
                var_19 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) 16808058261262671906ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)10603)) == (var_5))))) % (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_2 [i_0] [4LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)12)) <= (((/* implicit */int) (_Bool)1)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) 816542748)) : (0ULL)));
    var_22 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                var_23 *= (+(((((/* implicit */unsigned long long int) (+(var_5)))) | (max((((/* implicit */unsigned long long int) (_Bool)0)), (0ULL))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            arr_19 [1ULL] [i_3] [i_4] [i_4] [i_4] = max(((unsigned char)131), (((/* implicit */unsigned char) (_Bool)0)));
                            var_24 = arr_8 [11LL];
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    for (unsigned char i_7 = 3; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_25 *= ((/* implicit */short) (signed char)0);
                                var_26 *= ((/* implicit */_Bool) (signed char)-75);
                                arr_27 [i_6] [i_7] = ((/* implicit */unsigned char) (+(1252456618)));
                                var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_12)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2] [i_2])) < (1125899772624896ULL))))))));
                                arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                } 
                arr_29 [i_2] [(_Bool)1] = (signed char)-87;
            }
        } 
    } 
}
