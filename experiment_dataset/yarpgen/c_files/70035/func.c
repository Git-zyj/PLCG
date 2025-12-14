/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70035
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
    var_16 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_17 *= ((/* implicit */unsigned int) arr_0 [6]);
        arr_2 [i_0] = ((/* implicit */short) (+(min((((/* implicit */int) arr_0 [(short)5])), (-40502562)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) ^ (((var_15) >> (((/* implicit */int) var_11)))))) : (((/* implicit */unsigned long long int) ((long long int) min((var_2), (((/* implicit */unsigned int) (signed char)-2))))))));
            var_18 = ((/* implicit */signed char) (_Bool)1);
        }
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)133))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)59140)))) : (0LL))) < (((/* implicit */long long int) (+(((/* implicit */int) ((short) 9703461345538221776ULL))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_9 [(unsigned char)6] [(signed char)7]);
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_8 [i_3]) << (((-7845452238089464766LL) + (7845452238089464772LL)))))) ? (max((((/* implicit */long long int) (short)-4226)), (var_12))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))) ^ (arr_8 [i_4]))))));
                    arr_18 [i_2] [i_2] [6] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4])) || (((/* implicit */_Bool) arr_10 [i_2]))))) % (((/* implicit */int) arr_14 [i_2])))) > (((/* implicit */int) (short)-21566))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) ^ ((~(((/* implicit */int) (signed char)127))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)64358), (((/* implicit */unsigned short) max(((unsigned char)228), ((unsigned char)228)))))))) : ((~(((arr_15 [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                }
            } 
        } 
    }
}
