/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81040
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
    var_11 ^= ((/* implicit */int) ((max((var_10), (var_10))) ? (((/* implicit */unsigned long long int) var_6)) : (var_3)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_12 |= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), (max(((unsigned short)18696), ((unsigned short)46865)))))) : (var_1)));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_13 = ((/* implicit */short) ((unsigned int) (short)32767));
            arr_5 [i_0] [22U] [i_1] = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((short) (short)-29816))))), (var_8)));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (arr_8 [i_0] [i_1]) : (var_2)));
                var_14 = ((/* implicit */unsigned char) ((unsigned long long int) var_6));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_10)))))) ? ((+(min((3U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            }
            /* LoopNest 3 */
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 23; i_4 += 2) 
                {
                    for (int i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_1] [(unsigned char)14] [(unsigned char)14] [i_3] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (10166689648655960265ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned long long int) ((int) var_10)))));
                            arr_18 [i_3] [i_1] [i_1] [i_3] [i_1] [i_5 - 2] = ((/* implicit */int) arr_10 [i_0] [i_0] [13LL] [i_5]);
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-21048)) ? (-9004310914696069614LL) : (((/* implicit */long long int) 1944636502))));
                        }
                    } 
                } 
            } 
            arr_19 [i_0] = ((((/* implicit */_Bool) (signed char)50)) ? (3619199641U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [4] [i_1]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 2) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6 + 4])))) | (((int) arr_16 [i_6]))));
        var_17 *= ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_6 + 3] [i_6 + 1]));
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 13; i_7 += 2) 
    {
        for (long long int i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            for (short i_9 = 1; i_9 < 13; i_9 += 1) 
            {
                {
                    arr_31 [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-60)), ((unsigned short)18696))))) : (((var_6) % (((/* implicit */long long int) arr_10 [i_8] [i_8] [i_8 - 1] [i_8]))))));
                    arr_32 [i_7] [i_8 + 2] [i_8] = ((((/* implicit */_Bool) -4426063891038651062LL)) ? (2147483647) : (((/* implicit */int) (short)-7710)));
                    arr_33 [i_8] = ((/* implicit */int) var_9);
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_26 [i_8]))))) ? ((+(-9223372036854775788LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) arr_26 [i_8])) : (((/* implicit */int) arr_26 [i_8])))))));
                    arr_34 [i_8] [5ULL] [(signed char)7] = ((/* implicit */unsigned short) (~((+(arr_27 [i_8 + 3] [i_8] [i_8] [i_8 + 2])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_6);
    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((long long int) var_2))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) var_6))));
}
