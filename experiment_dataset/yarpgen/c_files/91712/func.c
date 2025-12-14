/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91712
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
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-77)), (var_0)))) ? (3460344027207489743LL) : (((((/* implicit */_Bool) -3460344027207489762LL)) ? (-3460344027207489744LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))) & (max((((/* implicit */long long int) min((var_12), (var_16)))), (((((/* implicit */_Bool) var_1)) ? (3460344027207489768LL) : (((/* implicit */long long int) var_0))))))));
    var_20 ^= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (3460344027207489744LL))) / (var_10))) == (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0])))))));
        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) var_16))));
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) & (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (3460344027207489744LL))) : (((/* implicit */long long int) var_8))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_23 = ((/* implicit */_Bool) max((((/* implicit */short) ((unsigned char) ((((((/* implicit */int) arr_2 [i_1])) + (2147483647))) << (((((-3460344027207489744LL) + (3460344027207489762LL))) - (18LL))))))), (min((((short) var_10)), (((/* implicit */short) (!(((/* implicit */_Bool) 3460344027207489736LL)))))))));
        arr_7 [i_1] = min((((9162607928570192081LL) % (-3460344027207489744LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)19668)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)23136))) >= (3460344027207489743LL)))) : (((/* implicit */int) (unsigned short)0))))));
        var_24 *= ((/* implicit */signed char) min(((-(var_1))), ((~(max((var_1), (((/* implicit */long long int) var_12))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 1) 
        {
            for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 3] [i_3 + 2])) ? (-3460344027207489769LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_3 + 1])))))) ? (((((/* implicit */int) arr_6 [i_2 + 1] [i_3 + 2])) * (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_6 [i_2 - 3] [i_3 - 2])))))));
                        var_26 = ((/* implicit */long long int) arr_2 [i_3]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_27 = ((/* implicit */long long int) arr_9 [i_5] [i_5]);
        var_28 = ((/* implicit */signed char) (((~(3460344027207489743LL))) & (((/* implicit */long long int) (~(var_8))))));
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 2) 
                {
                    {
                        arr_30 [i_6] [i_8] [i_9] = ((/* implicit */short) min(((+(((/* implicit */int) arr_26 [i_6 + 1] [i_6 + 1] [i_8 - 3])))), (((/* implicit */int) (short)6951))));
                        arr_31 [i_6] [i_7] [(unsigned short)10] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((-3460344027207489744LL) + (9223372036854775807LL))) << (((arr_12 [i_6 + 1] [i_9 - 1] [i_8] [i_8 - 1]) - (11107368065777649904ULL)))))) >= (max((((/* implicit */unsigned long long int) var_4)), (arr_12 [i_6 + 1] [i_9 - 1] [6U] [i_8 - 1])))));
                        arr_32 [i_6] [i_6] [(short)0] [i_8] [i_6] = ((((/* implicit */_Bool) arr_20 [i_6 + 1])) ? ((+(((var_0) / (((/* implicit */int) (unsigned short)45867)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (arr_20 [i_6 + 1])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_10 = 4; i_10 < 14; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    {
                        var_29 = ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) -3460344027207489744LL)), (arr_25 [i_6] [i_10] [i_11]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_6 [i_6] [i_6])) - (1858)))))))) << (((((((/* implicit */_Bool) -3460344027207489769LL)) ? (((/* implicit */int) (short)24173)) : (((/* implicit */int) (short)-11846)))) - (24137)))));
                        arr_38 [i_6] [i_7] [i_10] [i_10] [i_11] = ((/* implicit */long long int) max((var_13), (((/* implicit */short) ((4723821282057576167LL) > (((/* implicit */long long int) 134217712)))))));
                        var_30 = ((/* implicit */long long int) ((short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_27 [i_6] [i_7] [i_10 - 2] [i_10])))))));
                        arr_39 [i_7] [(unsigned short)10] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) arr_37 [i_6 + 1] [i_7]))), (((((/* implicit */int) arr_37 [i_7] [i_7])) & (((/* implicit */int) arr_37 [i_7] [i_10]))))));
                    }
                } 
            } 
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-6951)) : (((/* implicit */int) (signed char)-17))));
            arr_42 [i_12] = ((/* implicit */signed char) var_11);
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_45 [i_6] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [(_Bool)1] [2LL] [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-863685015) : (((/* implicit */int) (signed char)-8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) <= (-134217709))))) : (max((-3460344027207489744LL), (((/* implicit */long long int) var_13))))))) : (((unsigned long long int) arr_2 [i_6 + 1]))));
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                for (signed char i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) (~(min((arr_34 [i_6 + 1] [i_6 + 1] [i_14]), (arr_34 [i_6] [i_6 + 1] [i_14])))));
                        var_33 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [19LL] [i_15])) : (((/* implicit */int) var_3))))) > (var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)2286)) && (((/* implicit */_Bool) 7801010011616652548ULL)))))) : (min((-3460344027207489743LL), (9159940031851823165LL)))));
                        var_34 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)40789))));
                    }
                } 
            } 
            var_35 = max((((/* implicit */unsigned long long int) (unsigned short)40789)), (12871724593776704287ULL));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            arr_53 [i_6] [i_16] [i_16] = arr_27 [i_6] [i_6] [i_6] [i_16];
            var_36 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6 + 1])) ? (((/* implicit */int) arr_20 [i_6 + 1])) : (((/* implicit */int) var_12))))));
            arr_54 [i_16] = ((/* implicit */signed char) ((-2932493290019602519LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40789)))));
        }
        var_37 = ((/* implicit */long long int) min((var_37), ((~(-4723821282057576168LL)))));
    }
    var_38 = var_10;
}
