/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59325
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min(((unsigned short)12), (arr_3 [i_0] [i_0 + 1]))), (((unsigned short) 17592169267200LL))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned short)8599))))) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)12805)))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 1])) <= (((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 1])))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(min((((/* implicit */long long int) (_Bool)0)), ((((_Bool)1) ? (-4655343142535155747LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))))))))))));
        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0 + 3])))) == (((/* implicit */int) arr_0 [7LL]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) ((signed char) arr_6 [i_1 + 2] [i_1 + 3]));
        arr_8 [i_1] [i_1] = (!(((/* implicit */_Bool) 777653669175774576LL)));
        arr_9 [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_5 [i_1 + 2])) : (((/* implicit */int) var_9))));
        var_19 = ((/* implicit */unsigned short) arr_5 [i_1 + 1]);
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_20 = (!(((/* implicit */_Bool) 9223372036854775802LL)));
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_18 [i_1 - 1] [i_2] [i_3]))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 3; i_5 < 17; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) min((((((/* implicit */_Bool) 1134887391)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) arr_19 [(unsigned char)14])), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_18 [i_5 - 3] [i_5] [i_5])))))))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) var_6)))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (-1))))));
            arr_24 [i_6] [i_5] [i_5] = ((_Bool) (((-(((/* implicit */int) (_Bool)0)))) > (((/* implicit */int) arr_22 [i_5]))));
        }
        var_25 = ((/* implicit */unsigned short) var_8);
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)126)) + (((/* implicit */int) (signed char)-94))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_0)), ((signed char)-2)))) : (((/* implicit */int) arr_18 [i_5] [i_5] [i_5 + 3])))), ((-(((/* implicit */int) (signed char)-2)))))))));
    }
    for (signed char i_7 = 3; i_7 < 17; i_7 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_25 [i_7 + 1])) ? (((/* implicit */int) arr_25 [i_7 - 1])) : (((/* implicit */int) arr_20 [i_7 - 2] [i_7])))));
        arr_27 [i_7] = ((/* implicit */signed char) var_5);
        arr_28 [i_7 + 1] = ((/* implicit */short) (unsigned short)0);
    }
    var_28 = ((unsigned char) var_4);
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        for (short i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            {
                var_29 &= ((/* implicit */signed char) ((arr_23 [i_9 + 2] [i_9 + 2]) / (((((/* implicit */_Bool) min((arr_25 [i_8]), (((/* implicit */unsigned short) (signed char)2))))) ? (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) min((arr_35 [i_8]), (var_12))))))));
                arr_36 [i_8] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (_Bool)1))));
                arr_37 [i_8] = ((/* implicit */signed char) (unsigned char)31);
                var_30 = var_16;
            }
        } 
    } 
}
