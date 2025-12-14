/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75479
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
    var_12 ^= ((/* implicit */unsigned char) var_2);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)22)), (var_7)))))))));
    var_14 *= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) min(((signed char)-6), ((signed char)18)))) || (((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) 1385985993)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned short) max((((/* implicit */int) var_1)), ((-(((/* implicit */int) min((((/* implicit */short) (signed char)10)), (arr_0 [i_0 - 1]))))))));
        arr_3 [(unsigned char)8] = ((/* implicit */unsigned long long int) ((((var_11) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0])) : ((-(((/* implicit */int) (signed char)22)))))) >= (((/* implicit */int) var_1))));
        arr_4 [i_0] [i_0 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_3)))))))));
        var_15 = ((/* implicit */unsigned int) ((var_7) < (((/* implicit */long long int) ((var_5) & (var_2))))));
    }
    for (signed char i_1 = 1; i_1 < 8; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? ((~(((/* implicit */int) (signed char)-10)))) : (((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((((/* implicit */int) (unsigned char)241)) & (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) max((arr_1 [8LL] [17]), (var_10))))))));
        var_16 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned char)255))))));
        var_17 = ((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) && ((_Bool)1)))), (arr_1 [i_1 + 1] [i_1 - 1])));
    }
    for (signed char i_2 = 1; i_2 < 8; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_20 [i_3] [i_3] = ((/* implicit */int) var_9);
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) >= (var_0)))), (var_0))))))));
                        var_19 = ((/* implicit */unsigned short) arr_17 [i_2] [(_Bool)1] [i_3] [(_Bool)1] [i_5]);
                    }
                } 
            } 
        } 
        var_20 = arr_5 [i_2 - 1];
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            arr_25 [i_6] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (arr_17 [i_2 + 1] [i_2 + 1] [i_2 + 3] [i_2 + 1] [i_2 + 1])))) ? (((/* implicit */long long int) ((var_5) - (1015780488)))) : (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_7))))))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_10 [i_2 - 1] [i_2 + 4] [i_2 + 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))))));
                        var_22 -= ((/* implicit */int) (signed char)23);
                        arr_30 [i_6] = ((/* implicit */unsigned short) min((((max((((/* implicit */long long int) var_10)), (var_7))) ^ (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (signed char)-64))));
                        var_23 &= max((((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_2 + 1])) < (((/* implicit */int) var_1))))), ((unsigned char)249));
                        arr_31 [i_7] [(signed char)2] [i_2] = max((((/* implicit */int) (!(arr_28 [i_2 + 3])))), ((~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                var_24 -= ((/* implicit */signed char) (_Bool)1);
                var_25 = ((/* implicit */signed char) var_1);
            }
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((max((arr_21 [(signed char)10] [(signed char)10] [i_2 + 2]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) var_10))))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min(((unsigned char)242), ((unsigned char)168)))) : (((/* implicit */int) arr_9 [i_2]))))))))));
        }
        for (signed char i_10 = 2; i_10 < 9; i_10 += 3) 
        {
            arr_37 [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51476)))))));
            arr_38 [i_10] [i_10] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_24 [i_2] [i_2 + 4] [i_10 - 2])), ((-(((/* implicit */int) var_1)))))))));
        }
        var_27 |= ((/* implicit */long long int) ((((/* implicit */int) var_10)) < (((/* implicit */int) max(((unsigned short)2040), (((/* implicit */unsigned short) arr_18 [2ULL] [2ULL] [2ULL])))))));
        arr_39 [(unsigned char)10] [i_2 + 4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) / (var_8)));
    }
}
