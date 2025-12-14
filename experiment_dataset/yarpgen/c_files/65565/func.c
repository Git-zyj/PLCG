/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65565
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
    var_18 = ((/* implicit */long long int) (unsigned short)14879);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18110646354277413400ULL)) ? (-871580397) : ((+(86393264))))))));
        arr_4 [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65532))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)115), (((/* implicit */unsigned char) (signed char)-1))))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) 4681895287682394231LL)), (arr_0 [i_0]))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)93)))))))) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? (min((11267839557480893039ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (arr_0 [i_0]))) : (arr_0 [i_0])));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0])), (max((((/* implicit */unsigned int) (unsigned char)167)), (arr_2 [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) arr_1 [i_0])))))));
    }
}
