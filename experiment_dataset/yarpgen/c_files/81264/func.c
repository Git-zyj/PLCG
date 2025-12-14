/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81264
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
    var_14 = (+(max((((/* implicit */int) ((signed char) var_1))), ((+(((/* implicit */int) var_13)))))));
    var_15 = ((/* implicit */long long int) ((unsigned char) (+(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) 0LL)) : (((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (var_6)))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [3U] [i_0])), (var_8)))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) var_4);
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((3927772409893780562ULL), (((/* implicit */unsigned long long int) 17)))))));
            var_18 = ((/* implicit */unsigned long long int) (~(max((min((((/* implicit */unsigned int) var_2)), (2509186046U))), (((/* implicit */unsigned int) min((var_0), (var_3))))))));
        }
        var_19 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 264227403U)), (var_6)))) ? (((unsigned int) (signed char)91)) : (max((((/* implicit */unsigned int) arr_1 [i_0])), (var_1))))) - (max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        var_20 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) (unsigned short)8)))), (((var_9) != (((/* implicit */unsigned long long int) (-(var_0))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 4) 
    {
        var_21 = ((/* implicit */short) var_11);
        arr_8 [i_2] = ((/* implicit */unsigned char) (-(-708133353)));
    }
    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((11131475768260756347ULL) / (min((((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */unsigned long long int) 1785781252U)) : (112634492371670996ULL))), (((24ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8)))))))));
        arr_11 [(unsigned short)5] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_9 [i_3])))) != (((unsigned long long int) (short)-30169))));
    }
    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) (signed char)-112))))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((((/* implicit */int) arr_14 [i_4])) - (arr_12 [i_4])))))) & ((+((-(arr_9 [i_4])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 4) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_24 = ((/* implicit */int) 1785781249U);
                    arr_20 [i_4] [i_5] [8ULL] [i_4] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(3927772409893780583ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [(unsigned short)17] [i_5]), (arr_13 [i_6] [i_5]))))) : (((((/* implicit */_Bool) 4190728477U)) ? (((/* implicit */unsigned long long int) 1837750045U)) : (0ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                    arr_21 [i_4] [22ULL] [i_5] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((var_7), (var_9)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : (((unsigned int) arr_12 [i_4]))))));
                    var_25 *= max(((~(18446744073709551598ULL))), ((+(((((/* implicit */unsigned long long int) var_1)) % (arr_9 [i_4]))))));
                    arr_22 [(signed char)12] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) arr_14 [i_5 - 1])) : (((/* implicit */int) arr_14 [i_5 + 1])))));
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)5)), ((short)30168))))) >= ((+(16U)))))))))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (((-(max((((/* implicit */unsigned int) var_0)), (1228396631U))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((arr_13 [i_4] [i_4]), (((/* implicit */short) (unsigned char)112))))) != (((/* implicit */int) (!(((/* implicit */_Bool) 18068377322489586837ULL))))))))))))));
    }
    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_4), (((/* implicit */unsigned int) (short)-30892)))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0))))))) ? (((/* implicit */unsigned long long int) max((((unsigned int) var_12)), (min((669084280U), (((/* implicit */unsigned int) (unsigned char)144))))))) : (12192878182995484708ULL))))));
}
