/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65801
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = (+(((/* implicit */int) (unsigned short)37607)));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)50086)) == (((/* implicit */int) var_12))))) == (min((-136383529), ((+(((/* implicit */int) arr_0 [(unsigned char)2] [(unsigned char)2])))))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_1);
                    arr_9 [i_2 - 2] [i_0] [i_0] [i_0] = 2127534662;
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_3 + 2])))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_1 [i_3]))));
    }
    for (signed char i_4 = 2; i_4 < 19; i_4 += 4) 
    {
        var_21 = ((/* implicit */short) min((((((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */int) (short)-17559)))) ^ (((/* implicit */int) (unsigned short)46449)))), (((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned int) var_16))))) ? (((((/* implicit */_Bool) var_5)) ? (-136383517) : (((/* implicit */int) arr_13 [i_4] [i_4])))) : (((/* implicit */int) var_9))))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) min((arr_14 [i_4] [i_4]), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (arr_14 [i_4] [i_4])))), (((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_5)) - (7746))))))))));
    }
    var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4095)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-17559))))) ? ((-(-1479513367))) : ((-(((/* implicit */int) (unsigned char)120)))))), (((((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) var_8))))) >> (((((((/* implicit */int) (unsigned char)136)) ^ (((/* implicit */int) (signed char)127)))) - (218)))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((-17), (-136383534))))))) >> (((((((((/* implicit */int) var_12)) == (var_15))) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_17)), (var_6))))))) - (656U)))));
    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 136383525)) ? (((/* implicit */int) (short)6772)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)16384))))) : (((/* implicit */int) var_6)))) >> (((2415933678U) - (2415933661U)))));
    var_25 ^= ((/* implicit */unsigned short) (~(((int) ((var_16) >> (((3107868655U) - (3107868642U))))))));
}
