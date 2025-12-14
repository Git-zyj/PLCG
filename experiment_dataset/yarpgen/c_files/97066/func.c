/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97066
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned char) min((((/* implicit */signed char) arr_1 [i_0] [(signed char)14])), ((signed char)-55)))), (((unsigned char) 10326230065308589163ULL))));
        var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0])), (var_13))))))) ^ (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((49152ULL) ^ (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) % (arr_7 [i_0] [17LL] [i_2]))))));
                            var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_7 [i_0] [i_1 + 3] [i_2]) >= (((/* implicit */int) (short)12)))) ? (((/* implicit */int) max(((signed char)4), ((signed char)(-127 - 1))))) : (((((/* implicit */int) (signed char)53)) ^ (((/* implicit */int) (unsigned char)127))))))) ? (((arr_14 [i_0] [i_1] [19] [i_1 - 1] [i_1 - 1]) << (((arr_14 [i_0] [i_1] [i_1] [i_1 + 1] [i_4]) - (5097104271912047458ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_14 [12] [i_3] [i_2] [i_1 - 1] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_1 - 1] [i_2]) : (((/* implicit */int) var_7))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))))))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_5 [i_0] [i_2] [i_3]))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */int) arr_6 [i_1] [i_0] [i_0]);
            var_20 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_1]);
        }
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) min((((unsigned int) 1777523356U)), (((/* implicit */unsigned int) ((signed char) (short)-11774)))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 1; i_6 < 7; i_6 += 2) 
        {
            arr_21 [i_5] [i_6] = ((/* implicit */signed char) (((((-(5U))) * (((/* implicit */unsigned int) ((/* implicit */int) max(((short)23747), ((short)23752))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) 496)))))))));
            arr_22 [i_5] [i_6] = ((/* implicit */int) ((min((1777523347U), (4294967295U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30)))));
        }
        arr_23 [(unsigned short)10] = ((/* implicit */short) max((arr_3 [i_5] [i_5]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_5] [i_5])))))));
    }
    var_22 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_6)) <= ((~(((/* implicit */int) (unsigned short)12545)))))));
    var_23 -= ((/* implicit */long long int) var_1);
}
