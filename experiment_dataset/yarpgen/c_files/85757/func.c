/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85757
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) var_13);
        var_18 = ((/* implicit */unsigned short) var_11);
    }
    var_19 ^= ((/* implicit */unsigned short) ((15163187087653951812ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-51)) && (((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) var_15)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (_Bool)1);
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), (arr_5 [i_2 + 1] [i_1 - 1] [i_2])))) || ((!(((/* implicit */_Bool) (unsigned short)4141))))));
                var_22 += ((/* implicit */unsigned short) arr_0 [i_1] [15ULL]);
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) (short)-32350)))))) > (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)150))))) | (((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3951401557685731568LL)))))));
                var_24 = ((/* implicit */unsigned short) min((var_24), (var_3)));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((10787417938757324746ULL), (18446744073709551615ULL)))) ? (12932428021694973753ULL) : (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_14)))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)109)) - (104))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            {
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-18179)), (arr_9 [i_4])))) ? (((((/* implicit */_Bool) arr_11 [i_3] [i_4] [i_3])) ? (((/* implicit */int) (unsigned short)51429)) : (((/* implicit */int) arr_8 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15093743126782341826ULL)))))))) ? (2147483647) : (((/* implicit */int) (!((!((_Bool)1)))))));
                var_27 = ((/* implicit */int) 933778889955771571ULL);
                var_28 += ((/* implicit */long long int) arr_9 [i_4]);
            }
        } 
    } 
}
