/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96468
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (unsigned short)55768)) ? (var_1) : (((/* implicit */int) var_3))))))) / (var_2)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -7059045621575282475LL)) ? (5386783443367146995LL) : (((/* implicit */long long int) 470319587U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)504))) : (368711325U))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)220))))) ? (((/* implicit */int) (signed char)84)) : (3686484)))) : (arr_1 [i_0] [i_0]));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) 17293214567470201866ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)47862)))) : (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) var_8)) : (248)))))) || (((/* implicit */_Bool) 4294967295U))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_12 = arr_1 [0ULL] [i_1];
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            arr_8 [i_1] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(min((((/* implicit */int) arr_5 [i_2] [i_1])), (((((/* implicit */int) (signed char)64)) | (((/* implicit */int) var_6))))))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_4 = 3; i_4 < 19; i_4 += 3) /* same iter space */
            {
                arr_15 [i_4 + 3] [i_1] [9] = ((/* implicit */unsigned short) ((signed char) (unsigned char)27));
                var_13 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3671800098U))));
                var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)238))));
            }
            for (signed char i_5 = 3; i_5 < 19; i_5 += 3) /* same iter space */
            {
                var_15 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */int) (unsigned char)230)) : ((+(133101397))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((arr_13 [i_3] [i_5 - 3] [i_5 + 3] [i_5 - 2]) / (arr_13 [(unsigned short)13] [i_5 - 1] [i_5 - 3] [i_5 - 1]))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5 + 2] [i_5 + 3] [i_5 + 2] [i_5 + 2])) ? (arr_13 [i_5] [i_3] [i_3] [i_1]) : (((/* implicit */int) (_Bool)0))));
            }
            for (signed char i_6 = 3; i_6 < 19; i_6 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_6 + 1] [i_3])))))));
                arr_24 [i_3] [i_1] = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)0))));
            }
            var_19 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)365))))));
        }
    }
    for (short i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        var_20 = (!(((/* implicit */_Bool) arr_26 [i_7])));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_8))))) : (((unsigned long long int) (unsigned char)230)))))))));
        var_22 = ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) max((var_0), (var_0)))))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) -67635034)))) ? (((/* implicit */long long int) ((arr_4 [i_8]) / (arr_4 [i_9])))) : (((((/* implicit */_Bool) arr_26 [i_9])) ? (((/* implicit */long long int) max((1204426781), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))))));
                var_24 = ((/* implicit */long long int) var_9);
            }
        } 
    } 
}
