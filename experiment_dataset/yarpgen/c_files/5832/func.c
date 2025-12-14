/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5832
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)201))));
                    var_13 = ((/* implicit */unsigned int) (!(((max((((/* implicit */unsigned int) (signed char)-18)), (451960472U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0))))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) (((-(var_5))) >> (((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_10)))) - (23181)))))) < (max(((+(var_8))), (((/* implicit */long long int) var_0))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            {
                arr_15 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_8)))))) : (((long long int) max((((/* implicit */int) var_10)), (var_6))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 24; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_9))), (((/* implicit */unsigned int) ((unsigned short) var_6)))));
                            var_15 = ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((+(var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) var_7))), (((unsigned short) var_5)))))) : ((-(var_11))))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        {
                            arr_26 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11))))));
                            arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1))))) & (((int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            {
                var_17 -= ((/* implicit */_Bool) max((((/* implicit */short) var_4)), (((short) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_3)))))));
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((min((var_8), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-7)) < (((/* implicit */int) (_Bool)1))))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((var_5) > (var_5)))))))));
                                var_19 -= ((/* implicit */signed char) (((+(((/* implicit */int) var_10)))) ^ ((~(((/* implicit */int) (signed char)26))))));
                                arr_41 [i_13] [i_10] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_3)))));
                                arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_13] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) var_2)))), (((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((int) ((((/* implicit */int) (unsigned short)53260)) == (((/* implicit */int) (signed char)18))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) var_9)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) == (((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_6))))))))));
    /* LoopNest 3 */
    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
    {
        for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 16; i_16 += 3) 
            {
                {
                    var_22 -= ((/* implicit */short) min((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_3)), (var_10))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (var_6)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (var_8)))))))));
                    var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1)))))))));
                    var_24 = ((/* implicit */long long int) min((((max((var_9), (var_2))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_10))))))), (((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_2)))) ? (((unsigned int) var_8)) : (var_5)))));
                }
            } 
        } 
    } 
}
