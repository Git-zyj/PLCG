/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66302
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
    var_17 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) var_4)), (var_0)))))));
    var_18 -= ((/* implicit */unsigned int) var_15);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */unsigned char) ((_Bool) var_14));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((12952028876232748758ULL), (((/* implicit */unsigned long long int) (short)-10482))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32766))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_21 = ((unsigned long long int) min((var_8), (arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_3])));
                        var_22 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)246)) - (((/* implicit */int) (_Bool)1))))), (var_10)))) ? ((-((+(9839068950885372655ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_3])) - (((/* implicit */int) var_7))))));
                        var_23 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)32640)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (5494715197476802838ULL)))));
                    }
                    for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) arr_6 [i_1]);
                            arr_15 [i_2] [9] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_14)))) : (max((var_3), (var_3))))) >> (((max((7917031982098134476LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)56406))))))) - (7917031982098134465LL)))));
                            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_13 [i_1]), (((/* implicit */short) (unsigned char)0))))) ? (max((((/* implicit */unsigned int) (short)7052)), (var_3))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)31145))))))) >> (((((unsigned long long int) arr_11 [i_5])) - (18446744073709535710ULL)))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) var_8);
                            arr_19 [i_1] = ((/* implicit */unsigned int) min((min((max((((/* implicit */unsigned long long int) (_Bool)1)), (12952028876232748777ULL))), (((/* implicit */unsigned long long int) ((unsigned char) 2147483647))))), (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (short)3304))))) ? (((((/* implicit */_Bool) 14709340016079404162ULL)) ? (14270109478417721787ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_1 - 1])))))));
                        }
                        arr_20 [i_2] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned short) 13001042796375379382ULL))), (max((min((((/* implicit */unsigned long long int) var_11)), (18413213531696776308ULL))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) -2147483629)) : (3737404057630147453ULL)))))));
                        var_27 *= ((/* implicit */unsigned char) arr_3 [i_0 - 2]);
                        var_28 = ((((/* implicit */_Bool) 17520616005863186043ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16777215)) ? (max((2208677845U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : ((+(var_0))));
                    }
                }
            } 
        } 
    } 
}
