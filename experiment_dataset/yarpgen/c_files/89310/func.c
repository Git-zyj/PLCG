/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89310
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
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [22] [i_1] [i_0] [i_0] [i_1] = ((max((((7) & (((/* implicit */int) arr_6 [i_0 - 2] [i_1])))), ((+(((/* implicit */int) (signed char)127)))))) < (((max((((/* implicit */int) var_4)), (-5))) - (((/* implicit */int) (!(((/* implicit */_Bool) -15))))))));
                                var_18 -= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (signed char)-49))) >> (((max((130944), (((/* implicit */int) (signed char)7)))) - (130938)))));
                                var_19 *= ((/* implicit */short) arr_1 [i_0 - 1] [i_0 - 1]);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3019636425651665585ULL)))) ^ (max((var_11), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) max((arr_11 [i_0] [(signed char)1] [(unsigned char)18] [i_1] [i_1]), (arr_11 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (int i_8 = 1; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_5] [i_6] [(short)9] [i_8] [i_8])), (var_14)))) : (((var_7) / (((/* implicit */int) var_1)))))) % (max((((/* implicit */int) (signed char)58)), (max((130944), (-1)))))));
                                var_22 = (-((+((~(((/* implicit */int) (unsigned short)10931)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((arr_16 [i_5] [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54604)))));
                            arr_33 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) - (((/* implicit */int) max((var_4), (arr_31 [i_11] [i_5] [i_10] [i_10] [i_5] [i_5]))))));
                            var_24 *= ((/* implicit */signed char) ((var_2) >> (((max((max((((/* implicit */unsigned long long int) (_Bool)0)), (var_15))), (max((((/* implicit */unsigned long long int) (unsigned short)65523)), (15427107648057886030ULL))))) - (15427107648057886020ULL)))));
                            arr_34 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)25))))) != (var_0)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) arr_27 [i_5] [i_5]))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) max((3945690782U), (((/* implicit */unsigned int) (signed char)79))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) << ((((-(min((((/* implicit */unsigned long long int) -2083932863)), (567453553048682496ULL))))) - (17879290520660869105ULL)))));
    var_27 = ((/* implicit */int) (-(var_0)));
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12)) - (-7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((unsigned long long int) ((((/* implicit */_Bool) (short)4032)) && (((/* implicit */_Bool) (short)63)))))));
}
