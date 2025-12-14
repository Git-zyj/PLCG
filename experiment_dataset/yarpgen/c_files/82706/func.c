/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82706
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) >= ((-2147483647 - 1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 &= ((/* implicit */_Bool) ((unsigned short) arr_6 [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1]));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((long long int) ((int) 2147483647)));
                                var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) (short)32752)), (-2147483637)));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (unsigned short)65516)) : (-2147483637)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-32752))))), (max((arr_3 [i_2] [i_1]), (arr_3 [i_1] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_19 [i_8]))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_16 [i_5]), ((signed char)86))))) : (((((/* implicit */_Bool) arr_19 [i_8 - 1])) ? (((((/* implicit */_Bool) (signed char)-87)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_7] [i_5] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-87)))))));
                                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32747)) ? (((/* implicit */int) arr_23 [i_8 - 2] [i_8 + 2] [i_5] [i_8 - 1])) : (((/* implicit */int) arr_23 [i_8 + 1] [i_8 + 1] [i_5] [i_8 - 2])))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_7] [i_5] [i_7])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)240))))), (max((((/* implicit */unsigned int) (unsigned short)19)), (arr_5 [i_5] [i_5] [i_5])))))) : (((((/* implicit */_Bool) max((((/* implicit */signed char) arr_26 [i_6] [i_5])), ((signed char)86)))) ? (arr_18 [i_5]) : (((var_9) << (((/* implicit */int) arr_26 [i_5] [i_5]))))))));
                    var_17 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_12 [i_6] [i_6] [i_6] [i_7] [i_6] [i_6])), ((~(arr_5 [i_5] [i_6] [i_5])))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        var_18 |= ((/* implicit */unsigned short) (~(var_6)));
        var_19 = ((/* implicit */signed char) min((arr_30 [i_10] [i_10]), ((+(((((/* implicit */_Bool) -2147483640)) ? ((-9223372036854775807LL - 1LL)) : (var_5)))))));
        arr_31 [i_10] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) <= (arr_29 [i_10]))) ? (((((/* implicit */_Bool) arr_29 [i_10])) ? (arr_29 [i_10]) : (((/* implicit */unsigned int) 2147483647)))) : (arr_29 [i_10])));
        arr_32 [i_10] = ((/* implicit */short) (unsigned short)19);
    }
    for (long long int i_11 = 1; i_11 < 9; i_11 += 2) 
    {
        arr_35 [i_11] = ((/* implicit */_Bool) ((arr_18 [i_11]) | (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_11] [i_11] [i_11] [i_11] [i_11])) + (min(((-2147483647 - 1)), (((/* implicit */int) arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))))) ? (max((((/* implicit */long long int) arr_20 [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_11 + 1])), (max((6851547162977826382LL), (((/* implicit */long long int) -2000927096)))))) : (((/* implicit */long long int) -2147483630))));
    }
    for (long long int i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        arr_39 [i_12] [i_12] = ((/* implicit */unsigned int) (+(min((min((arr_30 [i_12] [i_12]), (((/* implicit */long long int) (signed char)86)))), (((/* implicit */long long int) max((var_2), (-694735161))))))));
        arr_40 [i_12] [i_12] = ((/* implicit */short) 2147483637);
        var_21 = min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((long long int) (-(((/* implicit */int) (unsigned short)58196))))));
        var_22 |= ((/* implicit */unsigned char) arr_19 [i_12]);
    }
    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
    {
        arr_44 [i_13] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_13] [i_13] [i_13] [i_13])))))));
        arr_45 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (2000927095) : (((/* implicit */int) (short)32763))));
        var_23 = ((/* implicit */unsigned short) var_4);
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (var_2)))) ? (((/* implicit */long long int) min((var_1), (-2147483629)))) : (min((((/* implicit */long long int) 2000927103)), (var_4)))))));
}
