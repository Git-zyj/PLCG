/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92676
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [(unsigned short)5] [i_0] = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned int) (_Bool)1)), (arr_4 [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)62))))))) ? (((((/* implicit */int) ((-1655245063497118260LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)248)) != (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0]))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((arr_1 [i_0]) + (arr_0 [i_0] [i_0]))) < (arr_0 [5U] [i_0]))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
    var_17 = ((/* implicit */short) ((((/* implicit */int) var_13)) == (min((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))), ((+(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(1015808LL)))) ? ((+(287667426198290432ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)10560)) | (((/* implicit */int) (_Bool)1))))))))))));
                    var_19 -= ((((/* implicit */_Bool) max((arr_1 [i_4 + 1]), (((/* implicit */unsigned int) arr_13 [i_4 - 1] [i_4 - 1] [i_4]))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3618980050U)) ? (((/* implicit */int) (short)15569)) : (((/* implicit */int) (unsigned char)194))))) / (arr_4 [i_4 + 1])))) : (arr_15 [i_2]));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -797031648)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) == (arr_15 [i_2])))) : (((/* implicit */int) ((arr_15 [(unsigned short)13]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((((/* implicit */_Bool) arr_8 [i_4 + 1])) ? (arr_8 [i_4 + 1]) : (arr_8 [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 - 1]))))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 8191U)) <= (287667426198290458ULL)))))))));
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */int) var_8)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)235))))) ? (((((/* implicit */int) (short)7936)) & (((/* implicit */int) (unsigned char)250)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)384)))))));
}
