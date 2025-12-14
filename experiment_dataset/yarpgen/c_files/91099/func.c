/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91099
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
    var_14 = ((/* implicit */_Bool) ((short) (signed char)86));
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-86)), ((unsigned short)28137)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)24311)))))));
        var_17 = ((/* implicit */unsigned short) ((min((((unsigned long long int) (signed char)83)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)86)) >> (((((/* implicit */int) var_3)) - (152)))))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)83)), (arr_0 [i_0])))) ? ((~(((/* implicit */int) arr_0 [(short)1])))) : (((((/* implicit */_Bool) 8898650572969345979ULL)) ? (((/* implicit */int) (unsigned short)53112)) : (((/* implicit */int) (short)-21498)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_0 [i_0])))) / (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), (arr_0 [i_0])))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_1 [17])) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) var_1))))))));
        var_18 -= ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned char) (signed char)83))))), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_11)))))) % (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 4; i_1 < 11; i_1 += 3) 
    {
        for (int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_1 - 2])), ((unsigned short)27710))))));
                                arr_15 [i_1] [(_Bool)1] [i_2] [i_3] [i_2] [i_2] [i_5] = ((/* implicit */signed char) max((min((arr_11 [i_1 + 1] [i_2 + 1] [i_2] [i_1 - 3]), (arr_11 [i_3] [i_2 - 1] [i_2] [i_1 - 2]))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_1] [i_2 - 1] [i_2] [i_1 - 4])) > (((/* implicit */int) arr_11 [i_1] [i_2 - 1] [i_2] [i_1 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 2) 
                    {
                        arr_20 [i_1] [i_1] [(signed char)2] [i_1] &= ((((/* implicit */int) (short)8021)) >> (((/* implicit */int) (!(((8507470727016149081ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_2] [i_3] [i_2] [i_6])))))))));
                        var_20 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)85)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (0ULL)))))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)64)) && (((/* implicit */_Bool) var_0)))))) - (min((((/* implicit */unsigned long long int) (short)-8021)), (var_6)))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9338471057261555081ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147)))));
}
