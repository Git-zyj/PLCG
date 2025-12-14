/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98457
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
    var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_3) ^ (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_9)))) >> (((min((((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_0))))), (min((var_1), (((/* implicit */long long int) var_4)))))) + (2480039865815951500LL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((var_5) + (9002144208990640705LL))))))))) >= ((+((-(((/* implicit */int) var_2))))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 68719476735LL)) ? (-9223372036854775803LL) : (68719476754LL)));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (((-((-(((/* implicit */int) var_0)))))) >= (var_8)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (short i_4 = 3; i_4 < 23; i_4 += 3) 
        {
            for (int i_5 = 1; i_5 < 23; i_5 += 3) 
            {
                {
                    arr_17 [i_3] [i_4] = ((/* implicit */unsigned short) var_3);
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((unsigned int) (~(((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */long long int) var_8)), (var_1))) == (((long long int) var_5))))))));
                        var_13 = ((/* implicit */int) (~(-68719476764LL)));
                        arr_21 [i_6] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_3))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((var_7), (((/* implicit */unsigned short) var_2)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2)))))))))));
                    }
                    for (long long int i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        arr_24 [i_3] [i_4 - 1] [i_3] = ((/* implicit */int) (~(max(((-(var_5))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))))));
                        arr_25 [i_7] [i_7] = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (var_1)))))) >> ((((~((+(((/* implicit */int) var_6)))))) + (31424)))));
                    }
                    arr_26 [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((var_5) == (((/* implicit */long long int) ((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_9)))))) : (var_1)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_1)) : (var_3)))))));
                    arr_27 [i_5] [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */long long int) ((int) var_5))), (((((((var_1) + (9223372036854775807LL))) << (((((var_5) + (9002144208990640712LL))) - (27LL))))) >> ((((-(((/* implicit */int) var_9)))) + (63416)))))));
                }
            } 
        } 
    } 
}
