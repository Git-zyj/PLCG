/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70320
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
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) max((((/* implicit */long long int) var_0)), (-3656903920643437664LL))))), (((((/* implicit */_Bool) (unsigned short)936)) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) var_5))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_10 [7LL] [i_1] [18U] [12U] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16947)) % (((/* implicit */int) (_Bool)1))))) + (3656903920643437689LL)));
                        var_15 = (i_1 % 2 == zero) ? (((((/* implicit */int) arr_2 [18LL] [(signed char)18] [(short)2])) << (((arr_5 [14ULL] [i_1] [i_1] [8LL]) - (5606363701054893881ULL))))) : (((((/* implicit */int) arr_2 [18LL] [(signed char)18] [(short)2])) << (((((arr_5 [14ULL] [i_1] [i_1] [8LL]) - (5606363701054893881ULL))) - (7284198080079415414ULL)))));
                    }
                } 
            } 
        } 
        var_16 = (_Bool)1;
        /* LoopSeq 1 */
        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 2) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */int) ((_Bool) var_7))) * (((/* implicit */int) arr_11 [16LL] [8U]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                arr_16 [(unsigned short)4] [(unsigned short)19] = ((/* implicit */unsigned short) (-(-3656903920643437654LL)));
                var_18 = ((/* implicit */_Bool) (-(5422857895656723716ULL)));
                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4287192922U)))) || (((/* implicit */_Bool) arr_5 [(unsigned short)20] [i_5] [i_5] [8LL])));
            }
            arr_17 [(_Bool)1] = ((/* implicit */_Bool) ((((-9223372036854775798LL) + (9223372036854775807LL))) >> ((((-(-3656903920643437679LL))) - (3656903920643437667LL)))));
            var_20 -= ((/* implicit */short) (~(((/* implicit */int) (short)5985))));
        }
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9194944501324074977LL)) ? (((-8085629509765847612LL) | (((/* implicit */long long int) ((/* implicit */int) (short)5947))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_9 [(short)16] [(signed char)16] [17] [8ULL] [5LL] [15U]))))))));
    }
    var_22 = ((/* implicit */unsigned char) var_12);
    var_23 &= ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        for (unsigned int i_7 = 3; i_7 < 13; i_7 += 1) 
        {
            for (short i_8 = 1; i_8 < 13; i_8 += 2) 
            {
                {
                    arr_27 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+((-2147483647 - 1)))))))) >> (((((/* implicit */int) var_13)) + (26979)))));
                    var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(unsigned short)2] [(_Bool)1]))) - (arr_19 [0ULL])))) - (((((/* implicit */_Bool) var_9)) ? (3656903920643437660LL) : (((/* implicit */long long int) var_11))))))), (6920948507668527595ULL)));
                }
            } 
        } 
    } 
}
