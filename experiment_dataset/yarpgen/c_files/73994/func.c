/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73994
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (+(((/* implicit */int) var_16)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_19 &= ((/* implicit */signed char) min((min((((/* implicit */unsigned short) arr_11 [i_2] [i_2 - 1] [(_Bool)1] [i_2])), ((unsigned short)32767))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5)))))));
                        arr_12 [(signed char)0] [5LL] [i_3] [i_3] [(_Bool)1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(3574373775543064509LL)))) ? ((-(2790206799U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9))))), (((/* implicit */unsigned int) (short)-18108))));
                        var_20 = ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : ((+(arr_1 [i_2 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            arr_16 [i_4] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) var_10)), ((~(((/* implicit */int) var_1))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_1)), (max(((unsigned short)32783), (((/* implicit */unsigned short) (unsigned char)151)))))))));
                            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_2 + 1] [(unsigned short)4]) % (arr_5 [i_1] [i_1] [i_2 - 1] [(signed char)17])))) ? (((((/* implicit */_Bool) var_12)) ? (arr_5 [i_1] [i_1] [i_2 - 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_4 - 1] [i_2 + 1] [(unsigned char)9]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [7U] [i_2 - 2] [7U])) ? (((/* implicit */int) (unsigned short)32774)) : (((/* implicit */int) var_13)))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((short) ((((((/* implicit */int) ((signed char) (unsigned char)162))) + (2147483647))) << (((((((/* implicit */int) (short)-26)) + (34))) - (8)))))))));
                            arr_17 [i_0] [(unsigned short)17] [i_0] [(unsigned short)17] [(signed char)20] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_6)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))))) : (((((/* implicit */_Bool) (unsigned short)32788)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18097))) : (9223372036854775807LL)))))));
                        }
                    }
                    var_24 &= ((/* implicit */unsigned int) (signed char)37);
                    arr_18 [i_2] [21U] [21U] &= ((/* implicit */unsigned short) (~((+(var_17)))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) -9223372036854775786LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))))), ((~((+(((/* implicit */int) var_15))))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 3) 
        {
            {
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)125), (((unsigned char) arr_10 [19U] [19U] [(unsigned short)14] [i_6])))))) == (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned short)12631))))), (arr_5 [i_6 - 3] [i_6] [(signed char)15] [i_5]))))))));
                arr_24 [i_6] [i_6 - 1] [(unsigned char)10] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)9)) == (((/* implicit */int) (short)-24)))))) > (var_6)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 2; i_7 < 19; i_7 += 3) 
    {
        for (signed char i_8 = 1; i_8 < 20; i_8 += 3) 
        {
            {
                arr_29 [i_7] [i_8 + 1] [i_8] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)26))))) ? (((((/* implicit */_Bool) arr_26 [1LL] [(unsigned char)4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)68)))) : (((((/* implicit */int) var_8)) * (((/* implicit */int) var_8)))))));
                /* LoopNest 3 */
                for (long long int i_9 = 3; i_9 < 20; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)120))) / (144115188075855871LL))))));
                                var_28 -= ((/* implicit */short) min((((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (short)26161)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_36 [14U] [i_8] [i_8] [i_8] [i_8] [(unsigned char)17])) : (((/* implicit */int) (signed char)16)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_28 [i_11])) : (((/* implicit */int) var_15)))))), (((max(((_Bool)1), (arr_10 [(unsigned short)2] [i_8] [12LL] [i_10]))) ? (((/* implicit */int) arr_0 [i_9 - 3] [i_8 + 1])) : (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)18099))))))));
                                var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) min((-9223372036854775794LL), (((/* implicit */long long int) (short)-10))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (short)26161)), (arr_27 [i_7 - 2] [(signed char)0]))))))) % ((~(var_11)))));
                            }
                        } 
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)222)) % (((/* implicit */int) (short)-26183)))), (((/* implicit */int) (unsigned char)198))));
            }
        } 
    } 
}
