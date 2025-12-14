/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70897
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 &= ((/* implicit */int) var_6);
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)115))) ? ((-((~(((/* implicit */int) (signed char)101)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        arr_4 [i_0] [i_0] = ((signed char) (unsigned char)227);
    }
    for (int i_1 = 4; i_1 < 19; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) -644532639)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)97))));
            var_18 += ((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (-644532639)));
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-6510))))) ? (((int) (short)-6515)) : (((/* implicit */int) ((_Bool) var_2)))));
            arr_15 [i_1] [i_1 - 1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_15))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6510))) * (var_11))))));
        }
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)398)))))) >= (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11)))));
    }
    for (int i_4 = 4; i_4 < 19; i_4 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)18592))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) ((-226827187) * (((/* implicit */int) (_Bool)1))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((_Bool) (+((-(2072150077)))))))));
    }
    for (short i_5 = 1; i_5 < 18; i_5 += 2) 
    {
        arr_21 [(signed char)0] &= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)13839)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((signed char) (short)-6510))) : ((-(((/* implicit */int) (signed char)44)))))));
        arr_22 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((((/* implicit */_Bool) -8486714466527446009LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_10)))))) : (((unsigned int) var_12))))));
    }
    var_22 = ((short) var_5);
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 14; i_6 += 3) 
    {
        for (long long int i_7 = 2; i_7 < 16; i_7 += 4) 
        {
            {
                var_23 = ((/* implicit */signed char) ((short) ((signed char) ((signed char) -1247985368))));
                var_24 += ((/* implicit */signed char) min((min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) ((unsigned short) var_1)))));
                arr_29 [i_6] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
            }
        } 
    } 
}
