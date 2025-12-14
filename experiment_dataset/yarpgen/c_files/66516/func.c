/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66516
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
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0] [i_0 - 1])) / (arr_3 [i_0] [i_0] [i_0]))) * (((((-1093641869) - (((/* implicit */int) (signed char)-101)))) / (((/* implicit */int) max((var_7), (var_1))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((max((9060645850672005310ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4116896395U) >> (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (unsigned char)152))))))))));
                                var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)5))))), (18446744073709551590ULL)));
                                var_18 *= ((/* implicit */short) (unsigned short)16931);
                                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)27645))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                var_20 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))) == (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) arr_15 [i_5])))))))) >> ((((-(((((/* implicit */_Bool) 4792866085094606701LL)) ? (-2031158375) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_5])))))) - (2031158358)))));
                arr_18 [i_5] [i_5] [i_5] |= ((/* implicit */short) arr_14 [i_5]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_1))));
    var_22 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), ((-(var_8)))))));
}
