/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56035
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
    var_16 = ((/* implicit */long long int) min(((signed char)-23), ((signed char)0)));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((8855904652312382853ULL) - (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_12)) % (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-6182)) == (((/* implicit */int) var_4)))))) == (((((/* implicit */long long int) ((/* implicit */int) (signed char)115))) / (2296835809958952960LL))))))) : (min((((var_1) * (((/* implicit */unsigned int) var_9)))), (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) var_15);
                var_18 = ((/* implicit */signed char) ((long long int) ((((114688) >= (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) arr_1 [i_0])) : (((int) (signed char)-70)))));
                var_19 = ((/* implicit */signed char) arr_4 [i_0]);
                var_20 = ((/* implicit */signed char) ((_Bool) 14575532203271789650ULL));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_21 += ((((/* implicit */_Bool) min((arr_7 [i_2]), (arr_7 [i_2])))) ? (((/* implicit */long long int) min((arr_4 [i_2]), ((+(var_1)))))) : (((long long int) ((2831597458U) << (((130048ULL) - (130026ULL)))))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 4; i_6 < 11; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_14 [i_3]))))) : (((arr_15 [4LL] [i_3] [i_4] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))))));
                            arr_24 [i_2] [i_2] [i_3] [i_3] [i_5] [i_6] [i_6] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_6])) ? (-1457232753832530422LL) : (((/* implicit */long long int) arr_0 [0] [i_6 - 1])))));
                            arr_25 [i_6 + 3] [i_3] [i_3] [i_2] [i_6 + 1] [i_6] = ((/* implicit */signed char) ((short) 8693842619475307010ULL));
                        }
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_13)))))) < (((((/* implicit */_Bool) (short)32767)) ? (max((2296835809958952960LL), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) 1557728486))))));
                            var_24 ^= ((/* implicit */unsigned long long int) min((((arr_6 [i_2]) << (((arr_6 [i_2]) - (487015302U))))), (((/* implicit */unsigned int) ((short) arr_20 [(unsigned char)2] [i_3] [(_Bool)1] [i_3] [i_3] [i_3])))));
                        }
                        arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (short)-12972);
                    }
                } 
            } 
        } 
    }
}
