/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87570
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
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (short)0))))) <= ((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) + (-963832392289441199LL))))))))));
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((7U), (((/* implicit */unsigned int) (unsigned short)30720))))) | (max((((/* implicit */long long int) 1023U)), (1030084225213077139LL)))))) ? (var_5) : (((((/* implicit */_Bool) (-(-62902296)))) ? (17591649173504LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))) >= (-4931508381805931014LL)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned char) (((-(var_6))) <= (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_5] [i_0] [i_1] [i_0])))));
                                var_14 = ((/* implicit */unsigned int) ((unsigned short) var_9));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((long long int) (short)32040)))))), (var_3)));
            }
        } 
    } 
    var_16 &= ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */long long int) 1023U)) / (6457112319436152937LL))) >= (-6457112319436152922LL)))) <= (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_7 = 4; i_7 < 18; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            {
                var_17 += ((/* implicit */_Bool) var_11);
                /* LoopNest 3 */
                for (unsigned int i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        for (int i_11 = 1; i_11 < 18; i_11 += 2) 
                        {
                            {
                                var_18 ^= (((!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (arr_19 [i_8])))))) && (((/* implicit */_Bool) min((((/* implicit */signed char) var_1)), ((signed char)-93)))));
                                arr_32 [i_7] [i_7 - 3] [i_7] [i_7] [i_7] [i_7 + 1] = ((/* implicit */short) (((-(13517271275389052750ULL))) | (((/* implicit */unsigned long long int) (~(var_5))))));
                                var_19 = ((/* implicit */short) var_8);
                                arr_33 [i_7] [i_7] [i_7] [12U] [i_9] [i_10] [i_11] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (signed char)-84)), (1023U)))));
                            }
                        } 
                    } 
                } 
                arr_34 [i_7] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) << (((min((6416385538065808869ULL), (((/* implicit */unsigned long long int) (unsigned char)160)))) - (155ULL))))) ^ (((/* implicit */int) var_2))));
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_18 [i_7 + 1] [i_7 - 3])))) < (((((/* implicit */int) (short)18792)) | (((/* implicit */int) (short)-30558))))));
                arr_35 [i_7 - 3] [i_7 - 3] = ((/* implicit */short) var_0);
            }
        } 
    } 
}
