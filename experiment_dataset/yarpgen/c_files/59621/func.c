/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59621
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [11ULL] [i_1] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 479238172)) ? (arr_8 [i_2 + 4] [i_4 - 1] [i_4 + 1]) : (arr_8 [i_2 + 3] [i_4 + 1] [i_4 + 3])))) ? (((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_4 + 3] [i_4 - 1])) ? (13464709811349599094ULL) : (arr_8 [i_2 + 3] [i_4 + 2] [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-5)), (var_10)))))));
                                arr_17 [(short)3] [i_2 + 2] [12ULL] |= ((/* implicit */unsigned char) min((((/* implicit */signed char) ((_Bool) arr_15 [i_0] [i_1] [i_2 + 2] [(_Bool)1] [i_4 - 1]))), ((signed char)0)));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = var_3;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12; i_5 += 3) 
                    {
                        for (short i_6 = 3; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_18 = max((((/* implicit */long long int) ((unsigned char) max((69269232549888ULL), (((/* implicit */unsigned long long int) (unsigned short)65532)))))), (arr_13 [i_5] [i_6 + 1] [8LL] [i_2]));
                                arr_24 [i_0] [i_1] [i_1] [i_5] [i_6 - 2] = ((/* implicit */unsigned char) ((_Bool) ((_Bool) arr_22 [i_6 - 1] [i_2] [i_5] [i_2 + 3] [i_6] [i_5 - 3])));
                                arr_25 [i_0] [i_5] [i_1] [i_2] [i_5] [i_6] [i_6 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_0] [i_0] [i_2] [i_6 - 3] [i_2] [i_2 + 1]))) ? (arr_23 [i_0] [i_1] [i_2] [(signed char)8] [(short)6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4632990938569637848LL)) ? (((/* implicit */int) (short)10344)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_2 + 2] [i_5 - 2] [i_2])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 16232011572085264312ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [11LL] [i_8]))) : (var_5))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32611)) ? (((/* implicit */int) arr_2 [12ULL])) : (((/* implicit */int) (signed char)56)))))))) ? (min((((/* implicit */unsigned long long int) (short)7447)), (arr_23 [i_2 - 1] [i_2] [i_2 + 3] [i_2 - 1] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> ((((+(((/* implicit */int) (unsigned char)182)))) - (168))))))));
                                var_20 *= ((/* implicit */int) min((((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 1895944054U)))) || (((/* implicit */_Bool) var_5))))), (arr_29 [i_0] [i_1] [i_1] [i_2 + 2] [i_2] [i_0] [i_8])));
                                var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((unsigned char)255), ((unsigned char)119)))), (-4870221985199023528LL)))), (13020268031613640105ULL)));
                                arr_30 [i_8] [5U] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_3)))) + (((/* implicit */int) ((short) 950981514))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)93)), (arr_26 [(signed char)8] [i_1] [(_Bool)1] [(signed char)8] [i_0] [i_8])))) > (((((/* implicit */_Bool) (signed char)53)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((min((((/* implicit */long long int) (unsigned short)65535)), (arr_3 [i_0]))) / (((/* implicit */long long int) min((arr_28 [i_0] [(unsigned char)6] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (_Bool)1))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (8164423094122388496ULL)));
    }
    var_24 = ((/* implicit */short) var_6);
}
