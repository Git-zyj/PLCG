/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80841
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
    var_10 = var_3;
    var_11 |= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)148))))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)62134)))) - (62112)))))) : (7058956776060017845ULL)));
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 2249600790429696LL))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 2249600790429702LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [(signed char)15]) % (((/* implicit */int) (signed char)-85)))))))) : (arr_0 [i_0 - 1])));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0 - 3]), (arr_0 [i_0 - 3]))))));
            var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)13659))));
            var_16 = ((/* implicit */long long int) arr_3 [i_0] [i_0 - 4]);
        }
        for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)67), (((/* implicit */signed char) arr_5 [i_0] [(_Bool)1] [i_0]))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-85))))), (var_4))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 4291709512U)))) ? ((~(arr_1 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) var_8);
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 3] [i_2 - 1]))))) != (arr_3 [i_0 - 1] [i_2 + 3])));
                        var_20 = ((/* implicit */unsigned long long int) -9223372036854775803LL);
                        var_21 = ((/* implicit */signed char) var_1);
                    }
                } 
            } 
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_5);
            arr_13 [i_0] [i_0] = ((/* implicit */int) arr_11 [i_0] [i_2]);
        }
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_22 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-67))));
            arr_16 [i_0] [i_5] [i_5] |= ((/* implicit */long long int) (-(var_9)));
            var_23 = ((/* implicit */unsigned char) (short)-12429);
            var_24 = -2249600790429705LL;
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_9 = 2; i_9 < 20; i_9 += 1) 
                        {
                            arr_29 [i_0 - 3] [i_0] [i_7] [i_8] [i_6] = ((/* implicit */unsigned int) arr_10 [(unsigned char)12] [(unsigned char)12]);
                            var_25 = arr_22 [i_0 - 4] [i_0] [i_0] [i_0];
                        }
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            var_26 = 2147483644;
                            var_27 = var_4;
                            var_28 = ((/* implicit */signed char) (-((~(var_2)))));
                            arr_32 [i_0] [i_6 - 1] [i_6] [i_6 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0 + 1] [i_6 + 4]))));
                        }
                        var_29 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) < (arr_28 [i_0] [i_0] [i_6] [i_7] [i_0] [i_8]))) ? (2249600790429693LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0 - 3] [i_0] [i_0 - 2] [i_0] [i_0 - 4] [i_0 - 3])))));
                        arr_33 [i_0 - 1] [i_8] [i_8] [i_8] [i_6] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)81))));
                    }
                } 
            } 
            arr_34 [i_6] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))));
            arr_35 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_0] [i_6] [i_0])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (arr_3 [19LL] [i_0]) : (((/* implicit */int) arr_15 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        }
        arr_36 [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) -2249600790429705LL)) ? (((((/* implicit */_Bool) -2249600790429702LL)) ? (2370841276U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))))) : (((/* implicit */unsigned int) (~(arr_20 [i_0 - 1] [14ULL]))))))));
    }
    for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        var_30 = arr_9 [i_11] [(signed char)21] [i_11];
        var_31 = ((((((/* implicit */unsigned long long int) (~(-2249600790429689LL)))) > (arr_9 [i_11] [i_11] [i_11]))) ? (((var_6) + (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775798LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))))) : (((/* implicit */long long int) (+(max((arr_28 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) (signed char)72))))))));
    }
    for (signed char i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        var_32 = ((/* implicit */unsigned short) (+((~(1924126020U)))));
        var_33 = ((/* implicit */long long int) (signed char)-93);
        var_34 = ((/* implicit */unsigned char) arr_14 [14LL] [i_12] [i_12]);
        var_35 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-86)) & (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)126))))))))));
        var_36 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_12] [i_12] [i_12] [i_12] [i_12]))) - (var_8))) / (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_12] [14LL] [i_12] [i_12])))));
    }
}
