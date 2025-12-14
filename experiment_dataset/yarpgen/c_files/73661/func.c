/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73661
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)36817)) << (((90804148) - (90804144)))))) ? (((((/* implicit */long long int) arr_0 [i_1] [(unsigned char)3])) / (arr_5 [7LL] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((arr_5 [i_1] [i_1]) + (1716230413309147077LL)))))));
                var_15 = ((/* implicit */unsigned short) ((((arr_2 [i_0 - 1]) + (arr_2 [i_0 + 2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 9098103156897783397LL))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    arr_16 [i_2 - 1] = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_2] [i_2]))))), (arr_9 [i_3] [i_3])))), (min((((/* implicit */long long int) min((arr_8 [i_4]), (((/* implicit */unsigned short) var_13))))), (min((((/* implicit */long long int) (short)-13981)), (7075059780582567322LL)))))));
                    arr_17 [i_2] [i_2] [i_4 + 1] = ((/* implicit */unsigned int) (~(min((12718357993618867611ULL), (((((/* implicit */_Bool) (unsigned short)32976)) ? (1646093271932888318ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 + 3] [i_3] [i_3])))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_15 [i_2 - 1] [i_3] [i_4 + 1] [2]), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_15 [i_2] [i_3] [(unsigned char)0] [i_5])))))) : (((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_2 + 1] [i_3] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [0U] [0U] [i_4 + 1]))) : (8826246382468314977LL)))));
                        var_18 = ((((/* implicit */int) (unsigned char)243)) != (((/* implicit */int) ((((((/* implicit */_Bool) (short)-10937)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_7 [i_2 - 1]))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)61418)) << (((/* implicit */int) (short)1)))))))));
                        arr_20 [i_2] [(short)15] [i_4 + 1] [i_4 + 1] [(unsigned short)11] = ((/* implicit */unsigned short) ((var_5) ? (((long long int) 8826246382468314977LL)) : (((/* implicit */long long int) ((unsigned int) arr_12 [0U] [i_4 + 1] [i_5 - 2])))));
                        var_19 = ((/* implicit */signed char) var_3);
                    }
                    for (long long int i_6 = 2; i_6 < 15; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [11LL] [i_2] [8LL])) & (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) : (((((/* implicit */_Bool) arr_7 [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3] [4U] [i_4] [i_6] [i_2] [i_3]))) : (-8826246382468314972LL))))), (((/* implicit */long long int) 3490287320U))));
                        var_21 = (!(((/* implicit */_Bool) 3624141583U)));
                    }
                    var_22 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) (short)-1))) ? (((((((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2] [13ULL])) + (2147483647))) >> (((var_12) - (1750990179U))))) : (((/* implicit */int) arr_8 [i_3])))));
                }
            } 
        } 
    } 
}
