/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67081
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
    var_13 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 7; i_3 += 2) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1)))) ? (min((((/* implicit */unsigned int) (unsigned char)249)), (var_4))) : (((/* implicit */unsigned int) -380801367))))) ? (((((((/* implicit */_Bool) 18446744073709551614ULL)) ? (arr_11 [i_1] [(unsigned char)7] [(unsigned char)7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37662))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1574655060)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            var_15 = (-(((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [(_Bool)1]);
                /* LoopNest 2 */
                for (unsigned int i_4 = 3; i_4 < 8; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 7; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_0] [(unsigned char)9] [i_4])) >> ((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_5]))))));
                            var_18 &= ((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26646))) / (((((/* implicit */_Bool) (unsigned short)26630)) ? (arr_16 [0U] [0U] [0U] [i_4] [0U] [0U]) : (((/* implicit */unsigned long long int) 2312491022U))))))));
                            arr_19 [i_5] [i_0] [i_4] [3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38896)) ? (2840407460887061663ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 2; i_6 < 15; i_6 += 2) 
    {
        for (int i_7 = 2; i_7 < 13; i_7 += 2) 
        {
            for (unsigned int i_8 = 2; i_8 < 16; i_8 += 2) 
            {
                {
                    arr_29 [i_6] [i_6] [(short)13] = min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (arr_21 [8ULL]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_26 [i_6 - 2] [i_7 - 2])) : (((/* implicit */int) (signed char)60))))));
                    arr_30 [i_6] [i_7] [i_8 - 1] = ((/* implicit */unsigned long long int) (-(arr_22 [(unsigned char)10])));
                    arr_31 [i_6 + 1] [i_6 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38889)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) max((arr_21 [i_6 - 1]), (((/* implicit */unsigned int) ((arr_28 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8]) & (((/* implicit */int) arr_26 [i_6] [4U]))))))))));
                    var_19 = (!(((/* implicit */_Bool) (unsigned short)26646)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_6);
}
