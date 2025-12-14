/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9998
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
    var_14 = ((/* implicit */long long int) var_10);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((min(((+(arr_0 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (unsigned char)162)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */short) (+((-(((/* implicit */int) (unsigned char)136))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))));
        var_17 = (_Bool)0;
        var_18 = ((/* implicit */int) var_8);
    }
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) min((var_10), (((/* implicit */int) var_2))))) ? (13185479299284468576ULL) : (((((/* implicit */_Bool) (unsigned char)136)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_13)) ? (var_10) : (var_9)))))))))));
    /* LoopSeq 1 */
    for (int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (int i_4 = 2; i_4 < 23; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) arr_10 [i_2] [i_2]));
                    arr_15 [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_9 [i_2] [(unsigned char)0])) & ((-(arr_6 [i_2])))));
                    arr_16 [17] [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_5);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4757610893909870600LL)) ? (((/* implicit */int) (unsigned short)53680)) : (((/* implicit */int) (unsigned char)136))));
                    var_21 = ((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)11855)));
                }
            } 
        } 
        var_22 |= min(((~(((/* implicit */int) ((_Bool) arr_9 [i_2] [i_2]))))), (((/* implicit */int) arr_11 [(_Bool)1])));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    var_23 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [i_2]) / (15776001224421328146ULL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [i_5] [i_5] [i_6])), (13185479299284468572ULL)))))))) + (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))) : (((((/* implicit */_Bool) 10491670354922389786ULL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (-(-1368207222)))) ? (((/* implicit */unsigned long long int) -9223372036854775793LL)) : (((((((/* implicit */int) var_8)) >= (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned long long int) arr_18 [i_2] [i_2] [i_2])) : (((((/* implicit */_Bool) 802520946)) ? (var_13) : (((/* implicit */unsigned long long int) 319289974U)))))))))));
                    var_25 = ((/* implicit */long long int) -177554550);
                }
            } 
        } 
    }
}
